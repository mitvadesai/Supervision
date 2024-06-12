#include<stdio.h>
	struct details{

    char stu_name[10];
	int stu_rollno;
	int chamistry;
	int Mathematics;
	int Physics;	
	};
	
int main()
{
	int i,n;
	int Total;
	int Percent;
	
	printf("Enter details of Student : ");
	scanf("%d",&n);
	
	  struct details stu[n];
	  
	  printf("Enter %d Student Details \n",n);
	 
	  for(i=0;i<n;i++){
	 
	  	printf("Student %d:- \n",i+1);

		printf("Enter the name:");
		scanf("%s",&stu[i].stu_name);	   		
		printf("Enter the rollNo:");
		scanf("%d",&stu[i].stu_rollno);   	
		
		printf("Marks of chamistry:");
		scanf("%d",&stu[i].chamistry);	   	
		
		printf("Marks of Mathematics:");
		scanf("%d",&stu[i].Mathematics);	   	
		
		printf("Marks of Physics:");
		scanf("%d",&stu[i].Physics);	   			  
	}      
    printf("\n Details of all Students \n");
    for(i=0; i<n; i++){
        printf("Name : ");
        printf("%s \n",stu[i].stu_name);
 
        printf("RollNo : ");
        printf("%d \n",stu[i].stu_rollno);
 
        printf("chamistry : ");
        printf("%d \n",stu[i].chamistry);
        
        printf("Mathematics : ");
        printf("%d \n",stu[i].Mathematics);
        
        printf("Physics : ");
        printf("%d \n",stu[i].Physics);
        
        Total=stu[i].chamistry+stu[i].Mathematics+stu[i].Physics;
        Percent=Total*100/300;
        
        printf("Total :");
        printf("%d \n",Total);
        
        printf("Percent :");
        printf("%d \n",Percent);
        }
}