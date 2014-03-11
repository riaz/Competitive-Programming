#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INULL 0          //USED IN SECTION 1
#define CNULL '\0'       //USED IN SECTION 1  

#define AUTO 1  //USED IN SECTION 5
#define BOAT 2  //USED IN SECTION 5
#define PLANE 3 //USED IN SECTION 5
#define SHIP 4  //USED IN SECTION 5  


int main(){


	char name[5]; //USED IN SECTION 1 

	/* VARIABLES USED IN SECTION  2 */
	char name1[12];
	char name2[12];
	char mixed[25];
	char title[20];
	int i;
	/* VARIABLES USED IN SECTION 2 */	

	/* VARIABLES USED IN SECTION 3 */
	int index;
	int *ptr1,*ptr2;
	char str[40],*three;
	/* VARIABLES USED IN SECTION 4 */


	//This is a anonymous structure,i.e instances can be created only when it is being defined
	struct {
		char initial;
		int age;
		int grade;
	}boy,girl,kids[10],*point,extra;

	struct person{
		char name[25];
		int age;		
	};

	struct child{
		struct person details;
		int grade;
		int house;		
	};

	/* VARIABLES USED IN SECTION 4 */

	/* VARIABLES USED IN SECTION 5 */
	union{ //Anonymous union
		int value;
		struct{
			char first;
			char second;
		}half;

	}number;
	long idx;
	int fInt,sInt;

	typedef struct{ /*Structure of a automobile */
		int tires;
		int fenders;
		int doors;
	}automobile;

	typedef struct{ /* Structure of a boat or ship*/
		int displacement;
		char length;
	}boatship;

	typedef struct{ /* Structure of a aeroplane*/
		char engines;
		int wingspan;
	}aeroplane;

	struct{
		char vehicle; //what type of vehicle
		int weight;   //gross weight of the vehicle
		union{        //union for vehicle type details 
			automobile car;   // part 1 of the union
			boatship   boat;  // part 2 of the union 
			aeroplane  plane; // part 3 of the union
			boatship   ship;  // part 4 of the union
		}vehicle_type;
		int value;      //value of the vehicle in dollars
		char owner[32]; //owner name
	}ford,sun_fish,piper_cub;

	union{
		int index;
		struct{
			unsigned int x: 1; //1 bit
			unsigned int y: 2; //1 bit
			unsigned int z: 2;
		}bits;
	}numo;
	/* VARIABLES USED IN SECTION 5 */

	/* VARIABLES USED IN SECTION 6*/
	struct animal{
		char name[25];
		char breed[25];
		int age;
	}*pet1,*pet2,*pet3;
	/* VARIABLES USED IN SECTION 6*/


	/** START OF SECTION  1 **/

	printf("Null Character: %d\n",'\0'); //Value of Null Character
	printf("End of File Indicator: %d\n",EOF);  //Value of EOF Indicator	

	name[0] = 'a';
	name[1] = 'b';
	name[2] = '\0'; //Refers to end of the string

	printf("Name String: %s\n",name); // Name string of length 3, Oh yes, even NULL is counted in its length
	printf("Length of Name String: %d\n",strlen(name)); //returns 3

	//Note: The array still has capacity to hold more characters, so we shift the null right
	name[2] = 'c'; //Warning: we need to delimit with '\0' for the string to be valid and avoid syntax errors
	name[3] = 'd';
	name[4] = '\0';

	//This is the modified name string
	printf("Name String: %s\n",name); // Name string of length 5, Oh yes, even NULL is counted in its length
	printf("Length of Name String: %d\n",strlen(name)); //returns 5

	//What about , accesing the characters in the string by their index?

	//Character at index 3
	printf("Character at index 2: %c\n",name[2]);		
	//Character at index 4, seems to be the null character
	printf("Character at index 4: %c\n",name[4]);		// Output: ??, we thought it should be zero??WTF

	//Lets, check if something is fishy
	if(name[4] == '\0')
		printf("Unfortunatelly, I became invisible\n"); //Actullay, a %d flag gives zero, not a %c flag
	else
		printf("This printf statement is never used\n");

	//Even this is ok! Isn't it
	name[4] = 0; //i.e integer 0 is converted to character '\0' via coersion
	printf("Name String: %s\n",name); // Same as previous case

	//Or, even using a macro say #define INULL 0 to use in this case, meaning integer null
	name[4] = INULL;
	printf("Name String: %s\n",name); // Same as previous case

	//Or, even using a macro say #define CNULL '\0' to use in this case, meaning character null
	name[4] = CNULL;
	printf("Name String: %s\n",name); // Same as previous case

	/** END OF SECTION  1 **/

	/*** START OF SECTION 2 **/
	/* Time to use some string library say: string.h  -> #include<string.h>*/ 
	
	strcpy(name1,"Master Shifu");
	strcpy(name2,"Zidane");
	strcpy(title,"New Title Song");

	//Lets see what strcpy does to these character arrays
	printf("Title Contents: %s\n",title);
	printf("Name1 Contents: %s\n",name1);
	printf("Name2 Contents: %s\n",name2);

	//Now, lets compare the values in these arrays
	if(strcmp(name1,name2)>0)
		strcpy(mixed,name1);
	else
		strcpy(mixed,name2);

	//Printing the biggest among the two names alphabetically
	printf("The albhabetically bigger string is: %s\n",mixed);

	mixed[0] = '\0'; //This will fool the library to think that mixed is a empty string, as it has a null
					 //character at its initial index, making its length equal to 0
	printf("Mixed Contents: %s Length: %d \n",mixed,strlen(mixed));	

	//Demonstrating concatination of strings
	strcat(mixed,name1);
	printf("Mixed Contents after concating Name1: %s\n",mixed);
	strcat(mixed,name2);
	printf("Mixed Contents after concating Name2: %s\n",mixed);	

	//Calling the staticVar function 3 times consequtively, to see the effect of a static variable
	printf("Executing staticVar functin 3 times to understand static variables\n");
	for(i=0;i<3;i++){
		printf("%d\n",staticVar());
	}
	/*** END OF SECTION 2 **/

	/*** START OF SECTION 3 - Using Pointers**/
	printf("Value of Index: %d\n",index); //Isn't it kinda garbage, so lets initialize it prior
	index = 32;

	ptr1 = &index; //We know that ptr1 is a integer pointer, and  can hold the address of a valid integer

	printf("Address of index : %u\n",ptr1);
	//We have the address, we can peek into the value at that address uisng value@Address or using a * prefix before pointer
	printf("Value at index: %d\n",*ptr1); //This process is also called as pointer de-referencing

	//Did I say that pointer acts as reference, for illustration, try to analyze from the following 
	//sequence of actions

	*ptr1 = 45; //This will change the value in the variable index, indirectly by using a pointer to its address
	 printf("Changed Value of index using pointer ptr1 : %d\n",index); //So index get the value 45 indirectly using a  pointer to address

	 //A pointer holds the address of a variable,and thus we can apply assignment operation using two pointers
	 //And thereby create multiple threads of refernce to the variable , index in this case.

	 ptr2 = ptr1; //Now,any changes to ptr2 will reflect in ptr1 as well as index itself.
	 //Note: Anyway, the address of a variable on creation cannot be alterned , using integer arithmetic on pointers

	 *ptr2 = 99;
	 printf("Changed value of index due to ptr2: %d\n",index);
	 printf("Changed value of ptr1 due to ptr2: %d\n",*ptr1);
	 printf("Value of ptr2: %d\n",*ptr2);
	 
	 /* Also the address of the variable didn't change as stated prior*/
	 printf("No change in address: %u == %u == %u \n",ptr2,ptr1,&index);

	 /* Getting little inside  using pointers*/
	 strcpy(str,"This is a character string");
	 //Did you know, that a charter array varibale or string is a pointer to its first character
	 //Under above principle, we have as follows, the beginning address of the character string

	 printf("Beginning address of the char string str: %u\n",str);
	 //By intution, *str must have the value of the first character
	 printf("First charcter in the array: %c\n",*str);
	 //Since a array is consequetive, supsequent values can be obtained as 
	 printf("Third charcter in the array: %c\n",*(str+3)); //Say the 3rd character in the arrray
	 printf("Eighth charcter in the array: %c\n",*(str+8)); //Say the 8th character in the array
	 printf("First charcter in the array again: %c\n",*(str+0)); 

	 //pointer -> three was not initialized yet and hence must contain garbage value
	 printf("This is garbage address: %u\n",three);	 

	/*** END OF SECTION 3 **/

	 /* START OF SECTION 4*/
	 boy.initial = 'B';
	 boy.age = 19;
	 boy.grade = 78;
	 printf("Boy - Initial: %c Age: %d Grade: %d\n",boy.initial,boy.age,boy.grade);

	 girl.initial = 'G';
	 girl.age = 16;
	 girl.grade = 90;
	 printf("Girl - Initial: %c Age: %d Grade: %d\n",girl.initial,girl.age,girl.grade);

	 //Using array of the above structureeh: kids
	 //Alternating girls and boys
	 for(i=0;i<10;i++){
	 	if(i%2==0){
	 		kids[i].initial = 'B';
	 		kids[i].age = 10;
	 		kids[i].grade = 2;
	 	}else{
	 		kids[i].initial = 'G';
	 		kids[i].age = 10;
	 		kids[i].grade = 2;
	 	}
	 }

	 /*Displaying the kids information*/
	 printf("Initial\tAge\tGrade\n");
	 for(i=0;i<10;i++){
	 	printf("%c\t%d\t%d\n",kids[i].initial,kids[i].age,kids[i].grade);
	 }

	 /* C allows to copy one structure to another using one single statement*/	 
	 printf("Boy - Initial: %c Age: %d Grade: %d\n",boy.initial,boy.age,boy.grade); //Boy before
	 boy = girl;
	 printf("Boy - Initial: %c Age: %d Grade: %d\n",boy.initial,boy.age,boy.grade); //Boy after, so ultimately a boy becomes a  girl

	 /*Using pointer and structure together*/

	 for(i=0;i<10;i++){  //note: point is the pointer here
	 	point = kids+i;
	 	if(i%2==0){ //Now, reversing the boy girl alternate order
	 		point->initial = 'G'; //Note: point->initial is analogous to *(point).initial
	 		point->age = 11; //wow! Increase in age by a year
	 		point->grade = 3; //And so is the grade
	 	}else{
	 		point->initial = 'B';
	 		point->age = 11; 
	 		point->grade = 3;
	 	}
	 }

	 /*Displaying the kids information again with aid of pointers this time*/
	 printf("Initial\tAge\tGrade\n");
	 for(i=0;i<10;i++){
	 	printf("%c\t%d\t%d\n",kids[i].initial,kids[i].age,kids[i].grade);
	 }

	 /* Using nested and named structures*/
	 struct child student[5];

	 /* Filling the structures with dummy data*/
	 for(i=0;i<5;i++){
	 	strcpy(student[i].details.name,"John Doe");
	 	student[i].details.age = 20;
	 	student[i].house =  4;
	 	student[i].grade =  10; 		
	 }

	 /* Displaying the intialized nested structure*/
	printf("Displaying per Student Information: \n\n");
	for(i=0;i<5;i++){
	 	printf("Student Name: %s\n",student[i].details.name);
	 	printf("Student Age: %d\n",student[i].details.age);
	 	printf("Student House: %d\n",student[i].house);
	 	printf("Student Grade: %d\n\n",student[i].grade);

	 }	 

	 /* END OF SECTION 4*/

	 //Come,lets make a union
	 //Well,a union is a user-defined datatype like structure, but
	 //here the collection fields take up space economically, meaning 
	 //all the fields in a union are not assigned dedicated storage locations
	 //their fields overlap storage based on various scenario's
	 //so without further ado lets see union in implementation

	 /* START OF SECTION 5 */
	 for(idx=12;idx<300000;idx+= 35231){
	 	number.value = idx;
	 	/*Note: In the union number,the first element is a integer occupying 2 bytes of memory
	 	* The second element being structure of 2 chars also make use of the same memory
	 	* so first and last will automatically have 8 MSB and 8 LSB respectively.  
	 	*/
	 	fInt = (int)number.half.first;
	 	sInt = (int)number.half.second;

	 	printf("%8x \t %6x \t %6x\n",number.value,fInt,sInt);
	 }

	 /* Using the vehicle sturct and type union*/

	 ford.vehicle = AUTO;
	 ford.weight = 2742;
	 ford.vehicle_type.car.tires = 5;
	 ford.vehicle_type.car.doors = 2;	  	 
     
     sun_fish.value = 3742;
     sun_fish.vehicle_type.boat.length = 20;

     piper_cub.vehicle = PLANE;
     piper_cub.vehicle_type.plane.wingspan = 27;

     if(ford.vehicle == AUTO)
     	printf("The ford has %d tires. \n",ford.vehicle_type.car.tires);

     numo.index = 30;
     printf("Number: %d\n",numo.index);
     //Printing the 2 most significant digits of num.index
     printf("Number Bits pos 5-4: %d\n",numo.bits.z);     
     printf("Number Bits pos 3-2: %d\n",numo.bits.y);     
     printf("Number Bits pos   1: %d\n",numo.bits.x);     
     
	 /* END OF SECTION 5 */

	 /* START OF SECTION 6 */
	 //This section demonstrates dynamic memory allocation


	 /* END OF SECTION 6 */
	return 0;
}

extern int staticVar(void); //demonstratin the use of static variables

int staticVar(void){
	static int a = 1;
	return a++;
}
