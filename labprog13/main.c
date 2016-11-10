#include<stdio.h>

int mergefiles( char *fn1, char *fn2, char *fn3)
{
	FILE *f1,*f2,*f3;
	char name[50];
	int usn;
	f1=fopen( fn1,"r");
	f2=fopen(fn2,"r");
	f3=fopen(fn3,"w");
	if(f1==NULL||f2==NULL)
	{
		return -1; 		
	}
 	while(!feof(f1) && !feof(f2)) {
		fscanf(f1,"%s\n",name);
		fscanf(f2,"%d\n",&usn);
		fprintf(f3,"%s %d\n",name,usn);
	}
		fclose(f1);
		fclose(f2);
		fclose(f3);
	return 0;
}


int main()
{
	int usn;
	char fname1[20] = "student.txt";
	char fname2[20] = "usn.txt";
	char fname3[20] = "out.txt";
	mergefiles(fname1,fname2,fname3);
}
