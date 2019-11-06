/*
 * =====================================================================================
 *
 *       Filename:  con.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2019年06月21日 10时45分18秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	FILE *in, *out;
	char buf[1024];
	char temp[1024] = {'\0'};
	char *key, *value;
	char *ch;
	int i;

	if(argc < 3)
	{
		printf("Usage: name.ini name.xml\n");
		exit(1);
	}

	in = fopen(argv[1],"r");
	if(in == NULL)
	{
		perror("open ini file");
		exit(1);
	}
	out = fopen(argv[2],"w+");
	if(out == NULL)
	{
		perror("open xml file");
		exit(1);
	}

	while(fgets(buf,sizeof(buf),in) != NULL)
	{
		i = 0;
		//skip blank character
		while(buf[i] == '\t' || buf[i] == ' ')
		{
			i++;
			continue;
		}
		ch = strchr(buf+i,'\n');  //去除换行符
		if(ch != NULL)
			*ch = '\0';

		switch(buf[i])
		{
		case ';':
			fprintf(out,"<!-- %s -->\n",&buf[i+1]);
			fprintf(stdout,"<!-- %s -->\n",&buf[i+1]);
			break;
		case '[':
			ch = strchr(buf+i,']');
			if(ch != NULL)
				*ch = '\0';
			fprintf(out,"<%s>\n",&buf[i+1]);
			fprintf(stdout,"<%s>\n",&buf[i+1]);
			strcpy(temp,&buf[i+1]);
			break;
		case '\0':  //空行
			if(strlen(temp) != 0)
			{
				fprintf(out,"</%s>\n",temp);
				fprintf(stdout,"</%s>\n",temp);
			}
			memset(temp,'\0',sizeof(temp));
			fprintf(out,"\n");
			fprintf(stdout,"\n");
			break;
		default:
			key = strtok(&buf[i],"= ");
			value = strtok(NULL,"= ");
			fprintf(out,"\t<%s>%s</%s>\n",key,value,key);
			fprintf(stdout,"\t<%s>%s</%s>\n",key,value,key);
			break;
		}
	}
    if(feof(in) && strlen(temp) != 0)
	{
		fprintf(out,"</%s>",temp);
		fprintf(stdout,"</%s>\n",temp);
	}
	fclose(in);
	fclose(out);

	return 0;
}
