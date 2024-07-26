 hi murali,
     we are sending DBSS  paper what we are having.after recieving of
     it please inform to me because our mail system is not working prop
     erly .convey my wishes to our friends and vijay's brother.
     HAPPY SANKRANTI. 
					    yours
					      bhasker &vijay.


                              DBSS 
			     ------
      This paper is containing the Aptitude and Programming parts.

	                   APTITUDE PART
			   -------------
      (1)A man bought two horses for Rs.924 each and sold one horse for 
      15% profit and the other for 15% loss.What is the net gain?
      (2) Two pumps fill atank in 20 hrs. One pump fills the same
      tank 10hrs. faster than the other pump. In what time the
      other pump fills the tank?
      (3) X men in Xhrs/day finish a work in x days. Y men in y hours
      per day finish the work in 
      (a) X**2/Y**2 (b)X**3/Y**2 (c) Y**2/X**2 (d) Y**3/X**2
      (4)8 men + 2 boys finish a work in 16 days. 
      2 men + 5 boys finish a work in 20 days. 8 men and 8 boys
      finish the same work in how many days?
      (5)A & B are two trains, travell from X & Y stations to Y & X
      stations after crossing each other A takes 4 hrs.48 mins. to
      reach Y station. B takes 3hrs.20 mins. to reach X station.
      The speed A is 45kmph. Speed of B is ?
      (6) 5 questions on series
	(a) ab--bbc---ac----accc
	(b) &(c) like this 5.  
      (7)5 questions on alfabets.
      (8) 10 questions on English Grammer.
      (9) 20 questions on reasoning.
         
		  PROGRAMMING
		  -----------
                                 Section 1.
				 ---------
       1. To display the contents of a executable file the following 
       command can be used
       (a) cat  (b) od (c) vi   (d) ed                   ans : b
       2. Assume the current directory contains 10 files and does'nt
       contain 'temp'. What will be the output of the follwing 
       commands?
       $ls   temp
       $wc -l temp
       (a) 9  (b) 10 (c) 11 (d) undefined.   ans : b *c
       3. If one wants the output of one command( command1) to be 
       printed inthe printer as well as to be added to another file
       (outfile) which one of the following is a currect command 
       he can give?
       (a) $command1   outfile|tee lpr
       (b) $tee -a command1 | lpr
       (c) $ command1 | tee outfile | lpr
       (d) $ command | tee -a outfile |lpr          ans : d
       (4) In the shell program set -x will cause 
       A. Execution of the commands in the background
       B. Execution of the commands in verbose mode
       C. Exit from the shell program.
       D. Exit from the shell program after executing the next command
	ans:b
       (5)   ACL in UNIX refers to
       A.     Acces Control List
       B.    Action Control List
       C.    Application Command Language
       D.    Advanced C lanuage
	ans a:
       (6)    The command echo*
       A. will print * on the screen
       B. will print contents of all the files in the current 
       directory
       C. will list the files in the current directory
       D.   will print the contents of all shell variables
	ans c:
       (7)    ls || date will
       A.  print the name of the files in the current directory
       B. print today's date and time
       C. (A) followed by (B)
       D. none of the above
	ans : a
       (8) The built-in shell variable $$ refers to
       A.   printing numbers in dollar format
       B.   proces id_ of last command 
       C.   proces id_ of last background command issued
       D.   proces-id of current shell
	ans :d 
       (9)   dd is mainly used for 
       A.  dealing with raw, unformated data, whatever the source
       B.  dealing with data dictionary
       C.  deleting a directory
       D.  none of the above
	ans :d
       (10) vis  in UNIX is 
       A. a command that takes only one input
       B. a command for deleting strange or unwanted charectors that
       may have crept into files.
       C. points non-printable characters in understandable format
       D. all of the above
       (11) Which of the following is true regarding the UNIX
       (i) Multiuser Operating System
       (ii)Multitasking Operating System
       (iii) Real timing Operating System
       A. i only  B. i and ii only  C. i and ii and iii only
       D. i and ii 
	ans : a
       (12) ln command is used to
       A. link object codes into a executable code
       B. give two names to the same file
       C. set line numbers for the file
       D. none of the above
	ans : b
       (13) nohup command is used for 
       A. protecting the execution of programmes from aborting when 
       hangup signal is received
       B. changing the execution priority of the programes
       C. not hanging up of the modem
       D. disconnecting a node from the system
	ans : a
       (14)  SCCS is a 
       A. Tool for maintaining large programmes in a production 
       environment 
       B. Communication Protocol
       C. Shell Programming Language
       D.  String processing utility
	ans : a
       (15)  Which one of the following is true as long as UNIX is 
       concerned
       A. One can do programming in C only
       B. It can support terminals capable of printing only uppercase
       characters
       C. The text files are sorted as it is in MS-DOS
       D. None of the above
	ans: d
       (16) Inside vi editor to replace the string 10/$$/92 with 
       10/$$/92 globally the following command can be used
       A.  :1,$ s/\/10\/\$\/94/10\/\$\$\/92/g
       B.  :1,$ s/\/10\/\$\/94/10\/\$\/$92/
       C.  :s10/$$/92/10/$$/92/g
       D.  :1,$ s/\/10\/$\/94/10\/$$\/92/g
****	ans : d

       (17) The ed command without any argument
       A. will print the current working directory
       B. will make the home directory as current directory
       C. will ask for the directory to be used as the current 
	  directory
       D. will go to the previous directory
       (18)  nice command is used 
       A. to increase/decrease execution priority of a command
       B. to compress a file
       C. to run a programme at latter time
       D. to set the key board responce slower
	ans : a
       (19)  What will be the output of the following command sequence
	  $ x='I am x'
	  $sh
	  $echo $x
        A. I am x  B. Blank line C. x D. None of the above
	ans :b
       (20) The command tr a-z 0-9 < x
       A. converts all the digits to lowercase alphabets
       B. converts all the lowercase alphabets to digits
       C. will give syntax error
       D. none of the above
	ans :d
	
                             SECTION 2:
			     ----------
1)study the following program
   #define MAX(x,y) ((x) (y)?(x):(y)
   main()
   {
   intx=5,y=5;
   printf("maximum is %d",MAX(++x,++y));
   }
   the outpput of the programis
   a)maximum is 7 (b)maximum is 5 (c)maximum is 6
   d)none of the above 
   2)given the following definitions
   int *p,*q,r;
   int values[30];
   p=&values[0];
   q=values+29;
   r=++q-p;
   what will be the value of r ?
   a)address of q minus p
   b)number of elements in the array
   c)(value pointed by q)+1-(value pointed by p)
   d)none of the above
   3)what will the output of the program?
   #include<stdio.h 
   //print the sum of the series 1/5+1/4+....
   static int =5;
   main()
   {
   int sum=0;
   do
   	{
	sum+=(1/i);
	}while(0<i--);
	printf("sum of the series is %d",sum);
	}
a)it will print the sum of the series 1/5+1/4+....+1/1
b)it will produce a compolation error
c)it will produce a runtime error
d)none of the above

4)study the following program
#include<stdio.h 
main()
{
	intoldvar=80;newvar=-80;
	int swap(int,int);
	swap(oldvar,newvar);
	printf("numbers are %d\t%d",newvar ,oldvar);
	}
 int swap(intolval,int neval)
	{
	int temval=olval;
	olval=neval;
	neval=temval;
	}
	the output of the program is
a)numbers are 80-80
b)numbers are 80 80
c)numbers are -80 80
d)numbers are -80 -80

5	STUDY THE PROGRAM BELOW, WHICH OF THE FOLLOWING STATEMENT WILL 
	MAKE PROGRAM WORK :-
	main ()
	{
	int *! = 10 , *j=20;
	i=i*j;
	}

A)	Replace i = i*j; as i = (int) ((int) i * (int)j);
B)	No error
C)	Replacei= i*j;as i = (int*) ((int)i*(int)j);
D)	Replace i+i*j ; as i = (int) i* (int)j;

6	Study the following program 
#include<stdio.h 
enum mode = {green,red,orange,blue ,white};
main ()
{
	green = green +!;
	printf("%d,%d",green,red );

}

The output of the program will be :-

A)  1,1	B) 0,1	C)  No output, error in compilation  
d)  None of the above


7	Study th following statements.

#define DELAYTIME  1000
volatile extern int k;
intj;

for (i=0;i<DELAYTIME;i++);
j=k;

A)	Volatile is meaningless for the variable k
B)	Volatile is meaningful for the variable k since k is external
        and can change
C)	Volatile is meaningless for the variable k since k is loop 
	 invariant 
D)	None of the above.

8	Study the following program :

#include<stdio.h 
main()
{
char buff[] = "this is a test";
int i, *ptr;
ptr = (int*)buff;
for (i=0;*ptr; i++);
printf("%c",*ptr++);
}

The following will be the output

A) This is a test  	B) It'll print junk  C) Compilation error
D)  None of the above

9	Select  the explanation for the following declaration
	itn (*(*ptr)(int)) (void)
A) 	ptr is apointer pointing to a integer function that takes an 
	intvalues returns an integer which will points to a function 
	with no argument.
B)	ptr is pointer to function that takes an int value returns a 
      pointer to a function with ano argument which returns a integer
c)	This is not a valid C statement.
D)	None of the above.
   
10	Study the following program

# include <stdio.h 
char *c[] ={
	"FILE",
	"EDIT",
	"SEARCH",
	"COMPILE",
	};
	
HAR **cp[] = {c+3,c+2,c+1,c};
char ***cpp = cp;
main()
{
	printf("%s", **cpp);
	printf("%s"< *--*++cpp+3);
	printf("%s", *cpp[-2]+3);
	printf("%s\n",cpp[-1][-1]+1);

}

The output of this program is 

A) SEARCHFILEEDITCOMPILE 	B) SEARCHCOMPILEEDIT
C) SEARCHEPILEDIT		D) None of the above

11	What is the size of ptr1 and ptr2.

struct  x {
	int j;
	char k[100];
	unsigned i;
};
int *ptr1:
struct X *ptr2;

A) Same depending on the model used      	B) 2,104
C) 2, Undefined for memory is not allocated	D)   2,4

12	If

i = i * 16;
	Which of the following is a better approach to do the operation
A)  Multiply i by 16 and keep it 	B)  Shift left by 4 bits
C)  Add i 16 times			D)  None of the above

13	What is the output of the following program 

#include<stdio.h 
main()
{
int i = 0;
switc(i) {
case 0 : i++;
	case 1 : i++2;
case2 : ++i;
}
printf("%d",i++);
}

output of the program :-
A) 1  	B) 3	C) 4	D)  5

14	In the following , where means

lseek(fd,0L,SEEK_END);
where = tell(fd);
A) End of file.	B)  Head of file 	C) Cannot be defined
D)  In between head and end of file.

15	Assuming that you are using IBM PC ,you have to a file of 
    128 intergers into a character array of 256 characters . 
    Which statement you use ?

char buf[256];
int word[128]'
int i;
i varies from 0 to 255 in steps of 2

a) 	word[i]=buf[i+1]*0x100 + buf[i];
b)	word[i]=buf[i]*0x100 +buf[i+1];
c)	word[i/2] = buf[i] *0x100 + buf[i+1];
d)   word[i/2]=buf[i+1]*0x100 +buf[i];

16	If i=5, what is the output for printf( " %d %d %d", ++i,i,i++);

a) 5,6,7	b) 6,6,7	c)  7,6,5 	d)  6,5,6

17)For the following code how many times the printf function 
is executed 

int i,j ;
 
for(i=0;i<=10;i++);
	for(j=0;j<=10;j++);
		printf("i=%d,j=%d\n",i,j);

a)121	b) 11	c) 10	d)  None of the above

18	What is the output generated for the following code
#define square (a) (a*a)
printf("%d",square(4+5));

a) 81	b) 4	C) 29  D) None of the above

19) For the following statement find the values generated for p and q?

int p = 0, q =1;
p = q++;
p = ++q;
p = q--;
p = --q;

The value of p and q are:-
a)  1,1		b) 0,0	c) 3,2	D)  1,2

20	What is the output generated by the following program ?
#include<stdio.h 
main()
{
	int a , count;
	int func(int);
	for (count = 1 ;count <=5;++count)
		{
		a = func(count);
		printf("%d", a);
		}
}
	int func(int x)
	{
	int y;
	y=x*x;
	return(y);

A) 1234567	b) 2516941 	C)  9162514   D)   1491625



1. Helmet:Head::?
   ans: Breakplate:chest
2. Writer:Pen::?            ans:Carpenter:Saw
3. cargo:lorry::?
4. In one shocking instance of ________________ research, one of the 
nations influential researchers in the field of genetics reported on 
experiments that were never carried out and published deliberately
_________ scinetific papers on existed work.
ans: Fradulent- deceptive
5. We need more men of culture eligitent we have too many ____ among us
ans: philistines
6. Hide-bound choose nearest antonym
ans: Open minded
7. She has been in her Bonnet She cantell ______
ans:Anto
8.If x-2y=2;2x+y=4 which of the following is right
ans:d
9. If 2men and 7boys can do a work in 16days.3men and 8boys cand do in
12 days 8menand 8boys ?
ans;6
10. Aperson wants 30% discount. But shopper gave 20% and 12%succesively
discount then the person gets
ans:29.6
11. The distance between A and B stations is 110 km. apart on a st.line.
 One train starts at A at 7am. and travels towards B at 20kmph. Another
 starts at B at 8am.and travels towards A at a speed of 25kmph.  AT
 what time they will meet?
 ans:10am.
 12. 2,2,6,52.5,157.5,630  find the wrong number
 ans:replace 52.5 by 45
13. 02,12,28,722,152,312,632 find thef wrong number
ans. replace 28 by 32
14. Air resistance is proportional to square of the velocity at a speed
of 3kmph. the resistance is 0.000045 gm/cm.  An aeroplance is 
travelling at a speed of 250 kmph.  What is the air resistance offered 
in kg/mit
ans:0.03125
15. A person gives 10% discount and he revenues 10% in bargaining.  The
printed price is 330.  What is actual price?
ans:270
16. For what period of time for 1800 at 5% interest will give interest
of 390% 
ans:13/3
17. 10 years back thef father age is 7 times of his son.  After 2 years
twice the age of the father is equal to 5 times of the son.  What are
their ages?
ans;f- 38,S- 14
18.  Train travels 100km. in first 2hrs. and 200 km. in 3hrs. and 150
km. in 2.5hrs.  What is the avg. speex?
ans;60kmph
19. A number when divided by 342 gives remainder 47 When the same 
number is divided by 19,what would be the remainder ?
ans:9
20. A and B can do work in 6 days. B alone can do in 16 days.  After
3 days of combined work B left.  In how many days further A completes
remaining work?
ans:24/5 days
21. In a parking place there are 36 vehicles. After first one scooter
is there. AFter 2nd car two scooters, after 34d car and  so on....
How many scooters are there in second half of the row?
ans; (YOU PLEASE DO THIS PROBLEM)
22. How many times do the hands of clock concide in a day?
ans;22
23. Fraction and simplification one problem is there. The exact answer
is 7/13.(this damn correct)
24. The least/greatest 4 digit numbers which when divided by 15,27,35,
42 leaves in each case a remainder 7 is
ans: 1897,9457
THERE IS SEPERATE SECTION FOR CRITICAL REASONING(GMAT TYPE) 6 QUESTIONS
LIKE THE FOLLOWING.
25.  All fans are vans.  No vans are fans
ans :
26.All young scientists are optimistic.  All optimists are open minded.
ans:
27. Assertion:  Comets belong to the solar family.
    REason: Comets burst into pieces and revolve around the sun
ans; Both A&R are true but R is not


	 Correct the sentence questions 4.

	8 figures are there. Among these for 4 problems you have to find
	the next figure. for remaing  you have find odd figure.(ALL ARE 
	EASY )

	ONE ANALYTICAL QUESTION AS FOLLOWS (THIS ALSO VERY EASY)

five people in a family named A,B,C,D,E.
probable answers confirm by reading the question carefully.
ans: A,B -sons
doctor C -daughter
officer D - daughter in law  ie. wife of B

using this you have to solve five questions. that is very easy
if you confirm the above. 

ie.  don't confuse with the sentance who learns music. he clearly 
mension that daughter in law is offcier. he also mension that A is 
brother in law of officer. And C is a doctor.
  




   (dbss paper)
  VERBAL
  ANTONYMS
  8 INCENCE
  A)SOOTHE B)DOLE C) PSYCHIC D) BABBLE E) BICKERING 
  9 IMPETUOUS
   A) INVENTIVE B)SUMPTUOUS C)IMPATIENT D)THOUGHTFUL E)RELIABLE
  10 DEPRECATE
   A)ATTACK B)PRAISE C)CRITICIZE D)REDUCE E)BRIGHTEN
  
  SYNONYMS
  
  11)PLACATE
   A)WASH B)CHANGE C)CALM D)INFURIATE E)CONCILIATE
  12 HARBINGER
   A)ANNOUNCEMENT B)DOCK WORKER C)LOVER D)PRECURSOR E)FORERUNNER
  13 EMBELLISH
   A)EMBOSS B)SKETCH C)CLOTHE D)DESIGN E)GARNISH
  THE SENTENCES BELOW ARE DIVIDED INTO FOUR PARTS .
SELECT THE PART WHICH HAS AN ERROR
  
  14 A)THE REASON FOR	
     B)THE DELAY IS BECAUSE C)WE HAVE HAD DIFFICULTY 
D)IN OBTAINING MATERIALS
  
  15 A)THE NUMBER OF PEOPLE B)WHO OWN PERSONAL COMPUTERS
   C)ARE INCREASING D)EVERY YEAR
  
  SUPPOSED ANSWERS(BUT NOT SURE CHECK EVERY QUESTION 
IN DICTONARY OR WORDLISTS
  
  8)A 9) 10)B OR E 11)C 12)E 13)D 14)B 15)B
  
  THESE ARE ONLY AVAILABLE IN VERBAL .REMAINING ARE QUANT
  QUANT:-
  
  56 IF THE PRICE OF SUGAR RAISES BY 20%,AHOUSE HOLDER 
MST REDUCE HIS CONSUMPTION
  OF SUGAR BY WHAT % SO AS NOT TO INCREASE HIE EXPENDITURE
   A)12.5% B)15% C)16
  C)16 2/3% D)20%
  
  57 THE PRESSURE OF A CERTAIN MASS OF A GAS VARIES 
INVERSELY AS ITS VOLUME.
  WHEN P(MEASURED IN KGWT.PER SQ DECIMETER)IS 20,THEN V(MEASURED 
IN CUBIC DECIMETER)IS 450.FIND IN KGWTPER SQ  DECIMETER THE 
PRESSURE WHEN THE VOLUME IS 300 
  CUBIC DECIMETERS.ALSO FIND THE VOLUME WHEN THW PRESSURE IS 
60 KG WT PER SQ DECIMETER(N CUBIC DECI METER)
   A)30,150 B) 40,160 C)50,170 D)60,180 E)NONE
  
  58 IN HOW MANY OTHER WAYS CAN THE LETTERS OF THE WORD 
DOGMATIC BE RE-ARRANGED
   A)40320 B)40321 C)20132 D)40319 E)NONE
  
  50 AT A CERTAIN ,MOMENT A WATCH SHOWS A 2 MIN LAG 
ALTHOUGH IT IS FAST.IF IT
  SHOWED A 3 MN LAG AT THAT MOMENT BUT GAINED HALF A MIN MORE 
A DAY THAN IT DOES,
  IT WOULD SHOW THE TRUE TIME 1 DAY SOONER THAN IT USUALLY DOES.
HOW MANY MIN
  DOES THE WATCH GAIN PER DAY
   A)0.2 B) 0.75 C)0.5 D)0.4 E)0.3
  
  60)IF 29 IS ADDED TO 1/4 AND 1/3 OF A NUMBER ,THEN THE FIRST 
SUM WILL BE 1 LESS THAN 3/2 OF THE NUMBER AND THE SECOND ONE 
WILL EXCEED 1.5 TMES OF THE NUMBER BY ONE.FIND THIS NUMBER IF 
IT IS KNOWN TO BE AN INTEGER
   A)24 B)48 C)32 D)27
  
  61) A NUMBER CONSISTS OF THREE DIGITS WHISE SUM IS 10.THE 
MIDDLE DIGIT IS EQUAL TO SUM OF THE OTHER TWO AND THE THE NUMBER 
WILL BE INCREASED BY 99 IF THE FIRST AND THIRD DIGITS BE 
INTERCHANGED.THE NUM IS
  	A)154 B)361 C)253 D)NONE
  
  62)TEN YEARS AGO THE FATHER WAS 7 TIMES AS OLD AS HS SON,
TWO YEARS HENCE TWICE HIS AGE WILL BE EQUAL TO 5 TIMES HIS 
SON'S.WHAT ARE THEIR PRESENT AGES
  	A)38,14 B)40,20 C)52,26 D)NONE
  
  63)TWO PIPES A AND B CAN FILL A SISTERN IN 30 AND 40 MIN 
RESPECTIVELY.THIRD
  PIPE C CAN DRAW OFF 60 LIT OF WATER PER MIN.IF ALL 3 PIPES 
ARE OPENED,THE CISTERN FILLS IN 1 HOUR.WHAT IS THE CAPACITY 
OF THE CISTERN
  	A)995 LT B)1000 LT C)1100 LT D)1200 LT E)1440 LT
  
  64)MACHINE A PRODUCES 100 PARTS TWICE AS FAST AS MACHINE B DOES.
MAC B PRODUCES 100 PARTS IN 40 MIN .IF EACH MACH PRODUCES PARTS 
AT A CONST RATE ,HOW MANY PARTS DOES MACH A PRODUCE IN 6 MIN
   A)30 B)25 C)20 D)15 E)7.5
  
  65) A NECKLES IS MADE BY STRINING N INDIVIDUAL BEATS TOGETHER 
IN THE REPEATING PATTERN RED BEAD,GREEN BEAD,WHITE BEAD,BLUE BEAD 
AND YELLOW BEAD.IF THE NECKLES
  DESIGNED BEGINS WITH A RED BEAD AND ENDS WITH A WHITE BEAD,
THEN N COULD EQUAL
  	A)16 B)32 C)41 D)54 E)68
  
  66)A RAILWAY TRAIN 140 M LONG TRAVELLING AT 90 KMPPH WILL OVER 
TAKE ANOTHER TRAIN OF LENGTH 160 M MOVING IN THE SAME DIRECTION 
AT 72 KMPH IN WHAT TINE
    A)2 MIN B)1MIN C)3 MIN D)NONE
  
  67)TWO PERSONS A AND B ARE 200 KM APART.A TRAVELLS BY CAR IN 
THE DIRECTION OF B
  AT A SPEED OF 60 KMPH.B STARTS AT SAME TIME AND TRAVELLS BY 
MOTORCYCLE AT 40 KMPH TOWORDS A.AFTER HOW MUCH TIME THEY WILL MEET
  	A)2 HRS B)3 HR C)4 HR D)NONE
  
  68)IN 1937 ,A MAN STATED THAT HE WAS X YEARS OLD IN THE YEAR 
X**2.HE ADDED,"
  IF X IS ADDED TO THE MEMBER OF MY MONTH OF BIRTH,THE RESULT EQUALS 
THE SQUARE OF THE MONTH ON WHHICH I WAS BORN".WHEN WAS HE BORN?
  	A)7/5/1892 B)6/11/1892 C)18/1/1890 D)30/8/1893
  
  69 IN A FACTORY THE RATIO OF MALE WORKERS TO FEMALE WORKERS WAS 5:3.
IF THE
  NUMBER OF FEMALE WORKERS WAS LESS BY 40,WHAT WAS THE TOTAL NUMBER 
OF WORKERS
  IN THE FACTORY
  	A)120 B)160 C)180 D)NONE
  
  70) 18 MEN CAN BUILD A WALL 140 M LONG IN 42 DAYS.WITH THE SAME 
RATE,THE NUMBER OF DAYS THAT 30 MEN REQUIRED TO CONSTRUCT A SIMILAR 
WALL 100 M LONG IS
  	A)16 B) 17 C)18 D)NONE
  
  71) SIX PARTS OF MILK ARE MIXED WITH 1 PART OF WATER,5 LIT OF 
WATER ARE ADDED TO THE MIXTURE AND IT IS THEN FOUND TO CONTAIN 5 
TIMES AS MUCH MILK AS WATER.
  HOW MANY LIT OF MILK WERE THERE IN THE MIXTURE FIRST
  	A)16 B)20 C)25 D)NONE
  
  72)A PERSON CLOSES HIS A/C IN A BANK BY WITH DRAWING RUPEES 11000.
ONE YEAR EARLIER HE HAD WITHDRAWN RS 6500.TWO YEARS EARLIER HE 
HAD WITHDRAWN RS 12000.HOW
  MUCH MONEY HAD HE DEPOSITED AT THE TIME OF OPENING THE A/C 3 
YEARS EARLIER,IF
  THE ANNUAL SIMPLE INTEREST RATE WAS 10%
  	A)20000 B)25000 C)27500 D)22500
  
  73)FIND THE GREATEST NUMBER OF 4 DIGITS WHICH WHEN DIVIDED BY 
15,20 AND 28 LEAVES
  IN EACH CASE A REMAINDER 2
  	A)9662 B)9077 C)1090 D)NONE
  
  74) REDUCE 116690151/427863887
  	A)2/7 B)7/9 C)3/11 D)9/13
  
  75)ARUN AND RAMU ARE FRIENDS.ARUN BORROWED A SUM OF RS 400 
AT 5% PER ANUM SIMPLE
   INTEREST FROM RAMU.HE RETURNS THE AMOUNT WITH INTEST AFTER 
2 YEARS.RAMU RETURNS TO ARUN 2% OF THE TOTAL AMT RETURNED.
HOW MUCH DID ARUN RECEIVE
  	A)9.20 B)7.60 C) 8.80 D)NONE
  
  PROBABLE ANS:56) 57)A 58)A 59) 60)A 61)C 62)A 63)E 64)A 
65)E 66)B 67)A 69)B 72)B73)D 74)C 75)C 
  
  IN EACH CASE A REMAINDER O
  
  53) cc_ccdd_d_cc_ccdd_dd
  	a)d,c,d,c,c   b)d,c,d,d,c    c)d,c,c,d,d    d)None
  
  54) abab_b_bcb_dcdcded_d
  	a)abcd   b)acce   c)abde   d)bcde
  
  55) baab_c_bcbdc_dc_dded
  	a)abcd   b)bcde   c)dcbe   d)abce
  
