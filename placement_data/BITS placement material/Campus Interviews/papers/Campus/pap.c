From pg97p62@rohiniThu Dec  4 15:25:22 1997
Date: Thu, 4 Dec 1997 15:20:58 +0500 (GMT+0500)
From: NARASIMHA RAO <pg97p62@rohini>
To: 97pg006@karthika


From vsr@ece.iitkgp.ernet.inThu Dec  4 08:21:49 1997
Date: Mon, 29 Sep 1997 08:57:17 +0500
From: "V.Sreenivasulu.Reddy" <vsr@ece.iitkgp.ernet.in>

NOTE:::::

I'm sendin the questions, somany have no answers. U do check the
answers  for all the given questions also.

All questions are MULTIPLE CHOICES ONLY.

U do try to cover the related topics to get some understanding.
In interview They are asking C C++ Operating system concepts
and Networks.
They will ask about Ur interesting subjects, U try to have good
grip on those intresting subjects.

They selected 11 out of 55 students.
I'm 7th.
I did interview very well, They asked about c c++ project work and
operating systems, I answered well,
But they selected only 2 , one from CS and another is BTech ECE.
I lost it.
Ur project is concerned with TCP/IP so U R having fair chance to get
this NOVELL
Don't worry, prepare well, get it, All the best.


section 1::::;

*. GRE book test paper 3 section 5
question no. 8 to 12     (ships WXYZ starting on dec. 23rd..........)


* 5 programs are sheduled from monday to saterday, monday is not holiday,
PQRST are the programs. Theday before P is holiday, and some other clues are
given, we have to find the sequence (4 questions)

ANS: tuesday is the holiday
     P comes on wednesday ,
     U can do the remaining very easily.
* Suppose U R the presoner, There are two guards Who will tell truth or
one will tell truth. There is a gate for liberty and another foe hell.

Some questions are given, like
    i. are U tell truth?
    ii. another tell truth or not??
    iii. both of U R telling truth??
    iV. both of U lieing??
    V. --------------


    they gave  a. b. c. d. and asking about which sequencing is sufficient to
    find the gate for liberty??
    ( I can't give exact thing)
 
* There are WIFE and HUSBAND at one side of river. They have one child,
They want to cross the river. The child can't be lonly. The boat boy won't
permit morethan one to cross the river, what is the correct way to
cross the river??

* There are 7  targets, A B and C has to shoot them. All should be shooted 
consicutively.
    1. The no. of chances for A and B are not less thn 2,
    2. for C there is only one chance.
    3. A can't shot 3 times consicutively.
    4. B is permited to shoot in even chances only.

    They have given some 3or 4 questions on this

* 

-----------------------------------------------------------------------------
section 2:  Buchi's typing.
------------------------------------------------------------------------------
section 3::

1.Max value of SIGNED int 
    a. b. c. d.
2.One questin is given, long one, to find the answer U should be 
femiliar
 with the operation as follows

 int *num={10,1,5,22,90};
 main()
 {
 int *p,*q;
  int i;
  p=num;
  q=num+2;
  i=*p++;
  print the value of i, and q-p, and some other operations are there.
  }
  how the values will change??
3. One pointer diff is given like this:
  int *(*p[10])(char *, char*)
  asked to find the    meaning.
4. char *a[4]={"jaya","mahe","chandra","buchi"};
   what is the value of    sizeof(a)/sizeof(char *)
   a. 4 b.bytes for char c-- d.--
( we don't know the answer)

5. void fn(int *a, int *b)
   {
    int *t;
    t=a;
    a=b;
    b=t;
    }
    main()
    {
     int a=2;
     int b=3;
     fn(&a,&b);
     print the values os a and b;
     }
     what is the output--- out put won't swap, the same values remain.

     a. error at runtime
     b. compilation error
     c.2 3
     d. 3 2
6. 
#define scanf "%s is a string"
main()
{
 printf(scanf,scanf);
 }
 what is the output.

 ANS : %s is string is string

7. i=2+3,4>3,1;
   printf("%d"i);

   ans is 5 only.
8. char *p="abc";
   char *q="abc123";

   while(*p=*q)
   {
    print("%c %c",*p,*q);
    }

    a. aabbcc
    b. aabbcc123
    c. abcabc123
    d. infinate loop ( this may be correct)
9. printf("%u",-1)
what is the value?
a. -1 b. 1 c. 65336 d.  --


(maxint value-1   I think, check for the answer)

10. #define void int
    int i=300;
   void  main(void)
    {
     int i=200;
     {
      int i=100;
      print the value of i;
      }
      print the value of i
      }
      what is the output?


      may be 100 200
11.

   int x=2;
   x=x<<2;
   printf("%d ",x);


   ANS=8;
12.
     
int a[]={0,0X4,4,9};     /*some values are given*/

int i=2;

printf("%d %d",a[i],i[a]);

 what is the value???   (may be error)

 13.
     some other program is given , I can't remember it
     U can get it afterwads,

     the answer is 3 3, so U can check this in the exam. itself.

     I'll send the remaining two afterwars whenever I get them. OK !




  14. 



System concepts(25 Q im 20 min).We haven't remember exactly, but it will help
alot if u spend some time to revise these concepts.
  
   1.encription and decription is done in the following layer.
     a) DLL  b) Networklayer c)Transport d) presentation      Ans:d
   2.floating point has different formats on two different machines.This modifi-
     cations are taken care by which layer?
     a) DLL b)Network layer c)Transpor layer d)Presentation   Ans:d
     But check whether is it DLL dealing with frame formats.
   3.Time complexity of Quick sort algo
    a)N*N  b)log(N) c)N*log(N) d) N                            Ans:c
   4.Time complexity of AVL tree is .
    a)             --- do---                                   Ans:b
   5.Cycle steling is used in which concept?
    a)Programmed I/O  b)DMA  c)   (see Goankar book)           Ans:a or b
   * two questins on IP addressing format.
   6.Howmany octets are there in IP address 
    a)6  b)8  c)10  d)12           maybe (b)                   Ans:find
   7.What are the max number of hosts that can be served by IP
    a)254  b) 256  c)pow(2,24) d) --      maybe (c)            Ans:find
   8.which of the following is model representation of life cycle software
    a) Water fall model b)spiral c)..   (enquire with CS students)
   9.review of code is for the purpose of
    a)to find syntax error b)tocheck for the proper design .. 
   10.Semaphores are used for the resolution of
    a)contention  b)accessing of same resources by more than one
   11.In threading of processes when the race condition will happen
    a)low priority process b) higher priority process ...
    See O.S. by peterson
   12.Which of the following function is not performed by O.S.
    a)CPU sheduling b)Memory management c)Transaction d)..     Ans:c
   13.If two appl. programmes uses same libraries which of following are shared
    a)lib code b)code and stack c) data  d)data,code and stack      Ans:a(check for b)
   14.which is the 16 bit max singned int.
    a)66337  b)66338 c)257 d)258   a,b are not exact     ans:a
    15.When will interrupt occurs?
    a)devide by zero b)DMA completed c)no more memory        ans:may be c
    16.which of the following has low power cosumption
    a) EIL b)CMOS  c) Totempole  ......              Ans:b
    or the question is for fastest gate (EIL)
    17.which of the following is the wrong statement
     a)Cominational circuits has memory
     b)seqquential  circuits has memory
     c)sequential ckts is a function of time                     ans:a
    18.Virtual address is
     a) more than physical address
     b)lesstthan phy mem
     c)equal to phy mem
     d)none                                                ans : a
    19.Which of the following reduces CPU burden
     a)DMA b)............                                   ans :a
    20.malloc function allocates memory at
    a) compilation time b)link c)load d)running             ans: d

                          BEST OF LUCK



From vsr@ece.iitkgp.ernet.inThu Dec  4 08:21:49 1997
Date: Mon, 29 Sep 1997 08:57:17 +0500
From: "V.Sreenivasulu.Reddy" <vsr@ece.iitkgp.ernet.in>

NOTE:::::

I'm sendin the questions, somany have no answers. U do check the
answers  for all the given questions also.

All questions are MULTIPLE CHOICES ONLY.

U do try to cover the related topics to get some understanding.
In interview They are asking C C++ Operating system concepts
and Networks.
They will ask about Ur interesting subjects, U try to have good
grip on those intresting subjects.

They selected 11 out of 55 students.
I'm 7th.
I did interview very well, They asked about c c++ project work and
operating systems, I answered well,
But they selected only 2 , one from CS and another is BTech ECE.
I lost it.
Ur project is concerned with TCP/IP so U R having fair chance to get
this NOVELL
Don't worry, prepare well, get it, All the best.


section 1::::;

*. GRE book test paper 3 section 5
question no. 8 to 12     (ships WXYZ starting on dec. 23rd..........)


* 5 programs are sheduled from monday to saterday, monday is not holiday,
PQRST are the programs. Theday before P is holiday, and some other clues are
given, we have to find the sequence (4 questions)

ANS: tuesday is the holiday
     P comes on wednesday ,
     U can do the remaining very easily.
* Suppose U R the presoner, There are two guards Who will tell truth or
one will tell truth. There is a gate for liberty and another foe hell.

Some questions are given, like
    i. are U tell truth?
    ii. another tell truth or not??
    iii. both of U R telling truth??
    iV. both of U lieing??
    V. --------------


    they gave  a. b. c. d. and asking about which sequencing is sufficient to
    find the gate for liberty??
    ( I can't give exact thing)
 
* There are WIFE and HUSBAND at one side of river. They have one child,
They want to cross the river. The child can't be lonly. The boat boy won't
permit morethan one to cross the river, what is the correct way to
cross the river??

* There are 7  targets, A B and C has to shoot them. All should be shooted 
consicutively.
    1. The no. of chances for A and B are not less thn 2,
    2. for C there is only one chance.
    3. A can't shot 3 times consicutively.
    4. B is permited to shoot in even chances only.

    They have given some 3or 4 questions on this

* 

-----------------------------------------------------------------------------
section 2:  Buchi's typing.
------------------------------------------------------------------------------
section 3::

1.Max value of SIGNED int 
    a. b. c. d.
2.One questin is given, long one, to find the answer U should be 
femiliar
 with the operation as follows

 int *num={10,1,5,22,90};
 main()
 {
 int *p,*q;
  int i;
  p=num;
  q=num+2;
  i=*p++;
  print the value of i, and q-p, and some other operations are there.
  }
  how the values will change??
3. One pointer diff is given like this:
  int *(*p[10])(char *, char*)
  asked to find the    meaning.
4. char *a[4]={"jaya","mahe","chandra","buchi"};
   what is the value of    sizeof(a)/sizeof(char *)
   a. 4 b.bytes for char c-- d.--
( we don't know the answer)

5. void fn(int *a, int *b)
   {
    int *t;
    t=a;
    a=b;
    b=t;
    }
    main()
    {
     int a=2;
     int b=3;
     fn(&a,&b);
     print the values os a and b;
     }
     what is the output--- out put won't swap, the same values remain.

     a. error at runtime
     b. compilation error
     c.2 3
     d. 3 2
6. 
#define scanf "%s is a string"
main()
{
 printf(scanf,scanf);
 }
 what is the output.

 ANS : %s is string is string

7. i=2+3,4>3,1;
   printf("%d"i);

   ans is 5 only.
8. char *p="abc";
   char *q="abc123";

   while(*p=*q)
   {
    print("%c %c",*p,*q);
    }

    a. aabbcc
    b. aabbcc123
    c. abcabc123
    d. infinate loop ( this may be correct)
9. printf("%u",-1)
what is the value?
a. -1 b. 1 c. 65336 d.  --


(maxint value-1   I think, check for the answer)

10. #define void int
    int i=300;
   void  main(void)
    {
     int i=200;
     {
      int i=100;
      print the value of i;
      }
      print the value of i
      }
      what is the output?


      may be 100 200
11.

   int x=2;
   x=x<<2;
   printf("%d ",x);


   ANS=8;
12.
     
int a[]={0,0X4,4,9};     /*some values are given*/

int i=2;

printf("%d %d",a[i],i[a]);

 what is the value???   (may be error)

 13.
     some other program is given , I can't remember it
     U can get it afterwads,

     the answer is 3 3, so U can check this in the exam. itself.

     I'll send the remaining two afterwars whenever I get them. OK !




  14. 



System concepts(25 Q im 20 min).We haven't remember exactly, but it will help
alot if u spend some time to revise these concepts.
  
   1.encription and decription is done in the following layer.
     a) DLL  b) Networklayer c)Transport d) presentation      Ans:d
   2.floating point has different formats on two different machines.This modifi-
     cations are taken care by which layer?
     a) DLL b)Network layer c)Transpor layer d)Presentation   Ans:d
     But check whether is it DLL dealing with frame formats.
   3.Time complexity of Quick sort algo
    a)N*N  b)log(N) c)N*log(N) d) N                            Ans:c
   4.Time complexity of AVL tree is .
    a)             --- do---                                   Ans:b
   5.Cycle steling is used in which concept?
    a)Programmed I/O  b)DMA  c)   (see Goankar book)           Ans:a or b
   * two questins on IP addressing format.
   6.Howmany octets are there in IP address 
    a)6  b)8  c)10  d)12           maybe (b)                   Ans:find
   7.What are the max number of hosts that can be served by IP
    a)254  b) 256  c)pow(2,24) d) --      maybe (c)            Ans:find
   8.which of the following is model representation of life cycle software
    a) Water fall model b)spiral c)..   (enquire with CS students)
   9.review of code is for the purpose of
    a)to find syntax error b)tocheck for the proper design .. 
   10.Semaphores are used for the resolution of
    a)contention  b)accessing of same resources by more than one
   11.In threading of processes when the race condition will happen
    a)low priority process b) higher priority process ...
    See O.S. by peterson
   12.Which of the following function is not performed by O.S.
    a)CPU sheduling b)Memory management c)Transaction d)..     Ans:c
   13.If two appl. programmes uses same libraries which of following are shared
    a)lib code b)code and stack c) data  d)data,code and stack      Ans:a(check for b)
   14.which is the 16 bit max singned int.
    a)66337  b)66338 c)257 d)258   a,b are not exact     ans:a
    15.When will interrupt occurs?
    a)devide by zero b)DMA completed c)no more memory        ans:may be c
    16.which of the following has low power cosumption
    a) EIL b)CMOS  c) Totempole  ......              Ans:b
    or the question is for fastest gate (EIL)
    17.which of the following is the wrong statement
     a)Cominational circuits has memory
     b)seqquential  circuits has memory
     c)sequential ckts is a function of time                     ans:a
    18.Virtual address is
     a) more than physical address
     b)lesstthan phy mem
     c)equal to phy mem
     d)none                                                ans : a
    19.Which of the following reduces CPU burden
     a)DMA b)............                                   ans :a
    20.malloc function allocates memory at
    a) compilation time b)link c)load d)running             ans: d

                          BEST OF LUCK



From vsr@ece.iitkgp.ernet.inThu Dec  4 08:21:57 1997
Date: Mon, 29 Sep 1997 08:58:04 +0500
From: "V.Sreenivasulu.Reddy" <vsr@ece.iitkgp.ernet.in>


**************************************************************************

				WIPRO INFOTECH


------------------------------------------------------------------------------
Date: July 1997
source: Roorkee University
------------------------------------------------------------------------------
This paper have two sections
each paper contains 10 questions each.
-----------------------------------------------------------------------------
1) abcD+abcd+aBCd+aBCD
   then the simplified function is
   ( Capital letters are copliments of corresponding letters
     A=compliment of a)

  [a] a   [b] ab  [c] abc  [d] a(bc)* [e] mone
  (bc)*=compliment of bc

  Ans:  e

-------------------------------------
2) A 12 address lines maps to the memory of
  
 [a] 1k bytes  [b] 0.5k bytes [c] 2k bytes  [d] none

 Ans: b

----------------------------------------
3) In a processor these are 120 instructions . Bits needed to impliment
   this instructions
   [a] 6  [b] 7  [c] 10  [d] none

  Ans: b

-----------------------------------------
4) In 8085 microprocessor READY signal does.which of the following
   is incorrect statements
   [a]It is input to the microprocessor
   [b] It sequences the instructions

  Ans : b
----------------------------------------

5) Return address will be returned by function to
  [a] Pushes to the stack by call
  Ans : a
------------------------------------------
6)
   n=7623
   {
	temp=n/10;
	result=temp*10+ result;
       n=n/10
   }
  
Ans : 3267
----------------------------------------------
7) If A>B then
      F=F(G);
   else B>C then
      F=G(G);
   in this , for 75% times A>B and 25% times B>C then,is 10000 instructions
   are there ,then the ratio of F to G
   [a] 7500:2500  [b]  7500:625  [c] 7500:625 if a=b=c else
				     7500:2500
--------------------------------------------------
8) In a compiler there is 36 bit for a word and to store a character 8bits are needed. IN this to store
 a character two words are appended .Then for storing a K characters string,
 How many words are needed.
 [a] 2k/9  [b] (2k+8)/9  [c]  (k+8)/9 [d] 2*(k+8)/9 [e] none
  
 Ans: a
---------------------------------------------------------
9) C program code
   
   int zap(int n)
   {
    if(n<=1)then zap=1;
    else  zap=zap(n-3)+zap(n-1);
   }
   then the call zap(6) gives the values of zap
   [a] 8  [b]  9  [c] 6  [d]  12  [e] 15
  
  Ans: b
---------------------------------------------------------------

 
PART-B
-------
1) Virtual memory size depends on
   [a] address lines    [b] data bus
   [c] disc space       [d] a & c    [e] none

 Ans :  a
-----------------------------------------------
2) Critical section is 
   [a]
   [b] statements which are accessing shared resourses
   Ans : b
-------------------------------------------------

3) load a
   mul  a
   store t1
   load  b
   mul   b
   store t2
   mul t2
   add t1

  then the content in accumulator is

Ans : a**2+b**4
---------------------------------------------------
4) question (3) in old paper
5) q(4) in old paper
6) question (7) in old paper
7) q(9) in old paper
------------------------------
    



From vsr@ece.iitkgp.ernet.inThu Dec  4 08:22:04 1997
Date: Mon, 29 Sep 1997 14:13:02 +0500
From: "V.Sreenivasulu.Reddy" <vsr@ece.iitkgp.ernet.in>

Hai Narsi,

orey,

Erojanta lab lone untanu,
Kabatti, ventane talk cottataniki try chei.

ippudu 12 varaku,
madhyahnam 2:00 to 5:00
ratri 8:00 to 11:00




 Bye,
JAYA SEKHAR. M

From vsr@ece.iitkgp.ernet.inThu Dec  4 08:22:12 1997
Date: Mon, 29 Sep 1997 15:58:27 +0500
From: "V.Sreenivasulu.Reddy" <vsr@ece.iitkgp.ernet.in>


I got this from one of the research scholars.

----------------------------------------------------------------------
One person from Uttar Pradesh (UP) was in Mysore forabout4 years and his
wife was in Jaunpur (UP).  At the end of 4 years he distributed sweets
to his colleages in office stating that his wife has delivered a Son.
His colleagues were quite shocked and they asked how this happened when
our friend was in Mysore and his wife in Jaunpur. He said it is common
in UP that neighbours take care of the wife (good Samaritans) when he is
at Mysore.

The colleagues asked him what name he would give to the son to which he
replied "If the second  neighbour from his house in Jaunpur is involved
then the name would be DWIVEDI, if it is the third neighbour then
it would be TRIVEDI, if it is the fourth neighbour then it would be
CHATURVEDI and if it is a mixture of all the three then it would be
named as MISHRA and if the wife feels shy to tell the name of the person 
involved then the name of the child would be SHARMA and if she refuses to 
divulge the name of the person involved then the name of the child would be
GUPTA. If she does not remember then it is YADAV ,if she becomes Red
faced on asking this then it is REDDY.If she is too enthusiastic 'bout
it then it is JOSHI.

----------------------------------------------------------------------


JAYA SEKHAR. M

From MAILER-DAEMON@ece.iitkgp.ernet.inThu Dec  4 08:22:20 1997
Date: Fri, 19 Sep 1997 16:19:21 +0500 (IST)
From: Mail Delivery Subsystem <MAILER-DAEMON@ece.iitkgp.ernet.in>
To: vsr@ece.iitkgp.ernet.in
Subject: Returned mail: Host unknown

   ----- Transcript of session follows -----
550 maths.iitkgp.ernet.in (tcp)... Host unknown
550 umakant@maths.iitkgp.ernet.in... Host unknown

   ----- Unsent message follows -----
Received: by ece
	(1.38.193.4/16.2) id AA00947; Fri, 19 Sep 1997 16:19:55 +0500
Return-Path: <vsr@ece>
Date: Fri, 19 Sep 1997 16:19:21 +0500 (IST)
From: "V.Sreenivasulu.Reddy" <vsr@ece>
Subject: test mail
To: umakant@maths.iitkgp.ernet.in
Message-Id: <Pine.3.07.9709191621.A943-h101000@ece>
Mime-Version: 1.0
Content-Type: MULTIPART/MIXED; BOUNDARY="2004708313-724571951-874667994:#943"

--2004708313-724571951-874667994:#943
Content-Type: TEXT/PLAIN; charset=US-ASCII

test mail

--2004708313-724571951-874667994:#943
Content-Type: APPLICATION/octet-stream; name=ll
Content-ID: <Pine.3.07.9709191654.A943@ece>
Content-Description: 

PART 1

1). A beggr collects cigarette stubs and makes one ful  cigarette 
with every 7 stubs.  Once he gets 49 stubs .  How many cigarettes 
can he smoke totally.
                     Ans. 8
2). A soldiar looses his way in a thick jungle  at  random  walks 
from his camp but  mathematically  in  an  interestingg  fashion.  
First he walks one mile east then half mile to north.   Then  1/4 
mile to west, then 1/8 mile to south and so  on  making  a  loop. 
Finally hoe far he is from his camp and in which direction.
ans: in north and south directions 
   1/2 - 1/8 + 1/32 - 1/128 + 1/512 - and so on 
                = 1/2/((1-(-1/4))
      similarly in east and west directions
     1- 1/4 + 1/16 - 1/64 + 1/256 -    and so on 
             = 1/(( 1- ( - 1/4))
   add both the answers
3). hoe 1000000000 can be written as a  product  of  two  factors 
neither of them containing zeros
   Ans   2 power 9 x 5 ppower 9  ( check the answer )
4). Conversation between two mathematcians:
  first : I have three childern. Thew pproduct of their ages is  36 
.  If you sum their ages . it is exactly same as  my  neighbour's 
door number on my left. The  sacond  mathematiciaan  verfies  the 
door number and says that the not sufficient  .  Then  the  first 
says " o.k one more clue is that my youngest is the youngest"
Immmediately the second mathematician answers . Can  you  aanswer 
the questoion asked by the first mathematician?
What are the childeren ages?        ans  2 and 3 and 6
5). Light glows for every 13 seconds .  How  many  times  did  it 
between 1:57:58 and 3:20:47 am
      ans : 383 + 1 = 384

6). 500 men are  arranged in an array of 10 rows and 50 columns . 
ALL tallest among each row aare asked to   fall  out  .  And  the 
shortest among THEM is A. Similarly after resuming that to  their 
originaal podsitions that the shorteest  among  each  column  are 
asked to fall out. And the longest among them is B . Now  who  is 
taller among A and B ?
      ans  A  
7). A person spending out 1/3 for cloths , 1/5 of the  remsaining 
for food and 1/4 of the remaining for travelles  is left with
Rs 100/- . How he had in the begining ?
    ans    RS 250/-
8). there are six  boxes containing 5 , 7 , 14 , 16  ,  18  ,  29 
balls of either red or blue in colour. Some  boxes  contain  only 
red balls and others contain only blue . One sales man  sold  one 
box out of them and then he says " I have the same number of  red 
balls left out  as that of blue ". Which box is the one he  solds 
out  ?
Ans : total no of balls  =  89 and (89-29 /2 = 60/2 = 30 
     and also 14 + 16 = 5 + 7 + 18 = 30
9).  A  chain  is  broken  into  three  pieces  of  equal  lenths 
conttaining 3 links each. It is taken to a backsmith to join into 
a single continuous one . How many links are to  tobe  opened  to 
make it ?
    Ans : 2.
10). Grass in lawn grows equally thickand in a uniform  rate.  It 
takes 24 days for 70 cows and 60 for 30 cows . How many cows  can 
eat away the same in 96 days.?
    Ans : 18 or 19
11). There is a certain four digit number whose fourth  digit  is 
twise the first digit.
   Third digit is three more than second digit.
   Sum of the first and fourth digits twise the third number.
   What was that  number ?
  Ans : 2034 and 4368 


	If you qualify in the first part then you have to appear for 
the second i.e the following part.

Part 2.

1.  From  a  vessel  on  the  first  day,  1/3rd  of  the  liquid 
evaporates.  On the second day  3/4th  of  the  remaining  liquid 
evaporates.  what fraction of the volume is present at the end of 
the II day.  
2. an orange galss has orange juice.  and white glass  has  apple 
juice.  Bothe equal volume 50ml of the orange juice is taken  and 
poured into the apple juice.  50ml from the white glass is poured 
into the orange glass.  Of the  two  quantities,  the  amount  of 
apple juice in the orange glass and the amount of orange juice in 
the white glass, which one is greater and by how much?
3.  there is a 4 inch cube painted on all  sides.   this  is  cut 
into no of 1 inch cubes.  what is the no of cubes which  have  no 
pointed sides.
4. sam and mala have a conversation.  sam says i am vertainly not 
over 40.  mala says i am 38 and you are  atleast  5  years  older 
than me.  Now sam says you are atleast 39.  all the sattements by 
the two are false.  How hold are they realy.
5.  ram singh goes to his office in the city, every day from  his 
suburbun house.  his driver mangaram drops  him  at  the  railway 
station in the morning and picks him up in  the  evening.   Every 
evening ram singh reaches the station  at  5  o'clock.   mangaram 
also reaches at the same time.  one day  ramsingh  started  early 
from his office and came  to  the  station  at  4  o'clock.   not 
wanting to wait for the car he  starts  walking  home.   Mangaram 
starts at normal time, picks him up on the way and takes him back 
house, half an hour early.  how much time did ram singh walk.
6.  in a railway station, there are tow trains going.  One in the 
harbour line and one in the main line, each having a frequency of 
10 minutes.  the main line service  starts  at  5  o'clock.   the 
harbour line starts at 5.02a.m. a man goes to the  station  every 
day to catch the first train.  what is  the  probability  of  man 
catchinhg the first train
7.  some people went for vaction.  unfortunately it rained for 13 
days when they  were  there.   but  whenever  it  rained  in  the 
morning, they had clean afternood and vice versa.   In  all  they 
enjoyed  11 morning and 12 afternoons.  how many  days  did  they 
stay there totally
8. exalator problem repeat
9. a survey was taken among 100 people to firn  their  preference 
of watching t.v. programmes.  there are 3 channels.  given no  of 

people who watch
at least channel   1
"         "        2
"         "        3
no channels at all
atleast channels  1and 3
"     "           1 and 2
"        "        2 and 3
find the no of people who watched all three.
10. albert and fernandes they have two leg swimming  race.   both 
start from opposite and of the pool.  On the first leg, the  boys 
pass each other at 18 mt from the deep end of the  pool.   during 
the II leg they pass at 10 mt from the shallow end of  the  pool.  
Both go at const speed.  but one of them  is  faster.   each  boy 
rests for 4 sec to see at the end of the  i  leg.   what  is  the 
length of the pool.
11. T  H  I  S                Each  alphabet  stands  for  one 
        I S                   digit, what is the maximum value T 
--------------                can take
    X F X X
  X X U X
--------------
  X X N X X
--------------


1. an escalator is descending at constant speed.   A  walks  down 
and takes 50 steps to reach the bottom.  B runs down and takes 90 
steps in the same time as A takes 10 steps.  how many  steps  are 
visible when the escalator is not operating.
2. evvery day a cyclist meets a train at a  particular  crossing.  
the road is straignt before the crossing and both are  travelling 
in the same direction.  cyclist travels with a speed of 10  Kmph.  
One day the cyclist comes late by 25 min. and meets the train 5km 
before the crossing.  what is the seppd of the train.
3. five persons muckerjee, misra, iyer,  patil  and  sharma,  all 
take then first or middle names in the full names.  There  are  4 
persons having I or middle name of kumar, 3 persons with mohan, 2 
persons withdev and 1 anil.
--Either mukherjee and patil have a I or middle name  of  dev  or 
misra and iyer have their  I or middle name of dev
--of mukherkjee and misre, either both of them have  a  first  or 
middle name of mohan or neither have a first or  middle  name  of 
mohan
--either iyer of sharma has a I or middle name of kumar  hut  not 
both.
who has the I or middle name of anil
4. reading conprehension
5. a bird keeper has got Ppigeon, M mynas and  S  sparrows.   the 
keeper goes for lunch leaving his assistant to watch the birds.
a. suppose p=10, m=5, s=8 when the bird keeper  comes  back,  the 
assistant informs the x birds  have  escaped.   the  bird  keeper 
exclaims oh no! all my sparrows are gone.  how  many  birds  flew 
away.
   b. when the bird keeper come back, the assistand told him that 
x birds have escaped.  the keeper realised that atleast2 sparrows 
have escaped.  what is minimum no of birds that can escape.
6.  select from the five alternatives A,B,C,D,E
   AT THE end of each question ,two  conditions  will  be  given.  
the choices are to filled at follows.
a. if a definete conclusion can be drawn from condition 1
b. if a definete conclusion can be drawn from condition 2
c. if a definete conclusion can be drawn from condition 1 and 2
d. if a definete conclusion can be drawn from condition 1 or 2
e. no conclusion can be drawn using both conditions
1. person 1 says N<5
   person says n>5
     person 3 says 3N>20
     person 4 says 3n>10
    person 5 says N<8
whaT IS value of N
a) 1. no of persons who speak false being less than no of persons 
who tells the truth.
   2. person 2 is telling the truth.
b)  1. no of persong telling the truth  is  greater  than  no  of 
persons telling lies
    2. person 5 is telling the truth.
7.  there are N coins on a table.  there  are  two  players  A&B.  
you can take 1 or 2 coins at a time.  the person  who  takes  the 
last coin is the loser.  a always starts first
--1. if N=7
     a) A can always win by taking two coins in his first chanse
     b) B can win only if A takes two coins in his first chance.
     c) B can always win by proper play
     d) none of the above
--2.  A can win by proper play if N is equal to 
 a) 13   b) 37  c) 22 d) 34   e) 48      ans. e.
--3. B can win by proper play if N is equal to
a) 25   b)26    c) 32   d) 41  e) none
--4. if N<4, can A win by proper play always

8. Two turns have vertain pecular charcteristics.   One  of  them 
always lies on Monday, Wednesday, Friday.  \the other always lies 
on Tuesdays, thursdays and saturdays.  On the other days they tel 
the truth.  You are given a conversation.
    person A--  today is sunday my name is anil
    person B-- today is tuesday, my name is bill


answers for selected questions
2.  equal                          1. 150
3.  8                              2. 60 kmph
4. 37(M),41(S)                     3.  Mukherjee
5.   45 min.                       8. today is tuesday
6.   0.8
7.   18
11.   T max value = 4

            3. Anil kumar Mukherjee
               Kumar Misra dev
               Mohan iyer dev
               kumar patil mohan
               mohan sharma kumar




THIS FILE CONTAINS THE QUESTIONS WHICH MS SCHOLARS FACED IN PLACEMENT
                   INTERVIEWS IN 1994 AND 1995



Name: Biswajit Sain

for(int i = 1; i <= 1; i++)
{
	Company name: Wipro Infotech Ltd., Bangalore.
	Year: 1995

Wipinfo has 2 rounds of interviews. The first round is fully technical.
The second round, depending on the members of the board, may be
technical,
semi-technical or personal. Last year the second round was more
technical than the first(!) and the board was headed by Mr. P.V.Sanjeeva
Reddy, one of the no-nonsense, hardcore-technical, project leaders
in Infotech. This year it was headed by Mr. Victor Jayakiran, G.M.
(Technical, Global R&D) who was a much sober man and therefore spent
most of the time in the second round dealing with personal questions.

I detail here the technical questions asked in the first round --
--------------------------------------------------------------

[1] Tell us about your work in brief.
My Ans. Mention first the title, followed by a brief overview of the
work, what we plan to achieve, what has been achieved so far, finally
the relevance/scope of the work to the related area (i.e. how is it
going to be useful).	[ 5-10 mins. depending on interest of the
listener.]

[2..n] Questions related to the work.
Ans. Area dependent. [ ~ 10 mins ]

[n+1] Tell us what you know about DMA and why that is needed?
My Ans. As usual, mentioned the wastage of CPU computation power spent
in busy-waiting. Told how DMA works.

[n+2] What are the various types of scheduling algo, what is used by
UNIX?
My Ans. Mentioned Round Robin, First-come-first-served,
Shortest-job-first, Earliest-deadline-first, Least-laxity-first,
Priority-based-event-driven. UNIX uses RR with multi-level feedback.

[n+3] How can you implement SJF in UNIX?
My Ans. Usually, SJF means that we know the job-duration in advance. In
UNIX where we cannot know that, we have to make assumptions about that
based on which we should initially schedule. Periodically however, we
have to fine-tune our initial assumptions based on the times taken by
various ready jobs, and recompute estimates and change the schedule
accordingly.

[n+4] Different types of subroutine calling conventions?
My Ans. Call by value, reference, value-result.

[n+5] Parameter passing sequence used by C?
My Ans. Rightmost parameter pushed first on stack.

[n+6] What is a page-fault and how is it handled in UNIX?
My Ans. [Refer to MJBach, Ch. 9 for details].

Personal questions in the first round --
-------------------------------------

1. What was your overall position in the Univ. in B.E.
2. Why did you choose to join MS here.
3. How do you like the MS course.
4. Anything you want to know about us.

Technical Questions in the second round --
---------------------------------------

[1] What are the current trends and areas of focus in IT.
My Ans. Talked about emerging trends of S/W Engg and ISO 9000 stuff
(gave vague ideas about them as I don't know much nor do I care 
about these topics myself ;-)). Then mentioned the proliferation of O-O
methodologies and their usefulness in speeding up development process,
code re-usability, ease of maintenance, ease of bug-fixing.
Thirdly, mentioned the work going on in High-Speed N/w - FDDI, ATM,
Fast-Ethernet(100Mbps). Told whatever little I knew about ATM in
response to another question.

[2] What is a Micro-Kernel architecture.
My Ans. This is a developing area in OSs where  instead of building the
kernel as a single monolithic structure starting from scratch, it is
built as a set of layers. The micro-kernel provides only the bare-bones
like Device-drivers, rudimentary filesystem support etc. on which,
depending on the intended area of application of the OS, it can be
customized to provide various higher level OS features like
Multiprocessing, IPC, etc. 

Personal Questions in the second round --
--------------------------------------

1. Tell us about yourself, your background.
2. What does your father do currently.
3. Your performance in schooling, B.E.
4. Your +/- points.
5. Why do you think Wipro should take you.
6. What qualities do you have that make you a person suitable for going
into the IT industry (a corollary to the previous question).
7. What do your friends opine about you.
8. When do you think you will complete and be able to join.
9. How can you assure that you will join by that time.
10. Anything you want to know about us.

 } /* End of for() */



Name: G.Kartik
Year: 1995

Company name: Wipro Infotech

   FIRST INTERVIEW:(First the interviewer asked me to name two 
                    favorite subjects - OS and Networks)
   a) Describe the memory management policies in Unix. How is paging
      implemented? How page faults are handled? 
      Seems to be a favorite question for these chaps ---- Maurice Bach. 
   
   b) Write a macro in C for swapping two nibbles in a byte.
      -Use the shift operators and be careful while defining temporary 
      variables( if you do so) as you have to write a macro. Otherwise
      it is pretty simple.

   c) What is the CPU-scheduling policy in Unix? - Round robin scheduling
      with multilevel queues.

   d) Diffrence between short term, long term and medium term scheduler.
      -First two should be peaceful. The last one is also known as 
       swapper. (See Taenenbaum and/or Peterson)

   e) Name various page-replacement policies. Which can be implemented
      both with and without pre-emption? - see Peterson.

   f) Describe the Sliding window protocol. What is it's advantage
      over stop-and-wait? - Saves bandwidth. (Taenenbaum please)


   2ND INTERVIEW (Both personal and technical interleaved)
   a) Tell us something about yourself.
   b) Aren't you going for higher studies abroad? Why?
   c) Rank and CGPA. MSites do not have ranks but still they wanted to
      know my approx position in my batch. 
      - Shady question. It is your job to convince them that for
      MS, grades do not hold any meaning.

   d) What is re-entrant code? --- Non-self modifying code. Can be 
      shared by many processes simultaneously. Gave e.g. of text-editors
      like 'vi'.
      Counter Q: But then no code modifies itself. What does 'non-self 
      modifying' mean? ---- I don't know for sure.

   e) Diff between compilers and interpreters. Some fundaes about
      how to link code in  different files. 

   f) What would your friends tell us about you if we ask them?
      Standard question for everyone.



Company: Motorola (came in August'95)
Just one question: When do you expect to finish? ---By August'96
                   That is too late. We are looking for guys who
                   finish by Jan'96. Pl. apply a month before you 
                   submit your thesis. Thank you very much.


Company: HCL-HP
Written test:
One GRE type anals. section, and two comp Sc. sections. One Comp Sc. 
section was problem solving type. Quite easy. Only question worth mentioning
in it was:
    You are given a stack on which you can do the following:

    Push X ----push the contents of memory location X on the stack
    Pop X  ----pop the contents of top of stack into mem. loc X
    AND    ----pop top two elements of stack, AND them and push the
               result onto stack.
    NOR    ----pop top two elements, NOR them and push the result onto stack.

Given two data elements at memory locations A and B, obtain A XOR B using 
the above.

First Interview:- mostly technical.

	a) Asked about my B.E. and why I joined MS.

	b) My preference of posting. They asked this initially before
	   launching into any other questions. I told them Madras.
	   Remainder of the interview was mostly on OS and C. Nothing
	   on networks. Thus I have this inkling that they frame their 
	   questions on the basis of what you specify as your preference 
	   of posting and  depending on what projects are available there.

	c) What architectures, apart from 8085, do you know? --- Nothing 
	   very deep and I told them as much.

	d) Give the contents of process stack for the execution of 
	   a particular C-program they give. 
	   ------ The C-program as such is not important. You just have 
	   to remember the order in which the return address of any 
	   function/procedure call, the parameters, and the local variables
	   are stored on the stack. 
	   ( I guess, any CO book should have this. Maurice Bach talks 
	   about user and kernel stacks)

	e) What all are shared by parent and child processes immediately
	   after parent executes a fork system call? Cross questioned
	   about the 'copy on write' facility and 'dup' system call. 
	   --- again see MB, and also Stevens' 2nd chapter.

	f) What events happen when the following command is given?
		cat /etc/passwd | more 

	   ---- Describe how the shell forks the two processes and how
		the pipe gets created between them. 
	  Cross question: How does 'cat' know that its output has to be 
	                  written into the pipe and not into standard o/p?
			  

	g) Have you written any TSR's? --- No.
	   What are TSR? ----Terminate but stay resident programs.
	   Then does it mean DOS is a multitasking system? 
	   ---- No, TSRs are interrupt driven

	h) How are Windows programs different from normal C-programs?
	   ---- Windows programs are event driven.
	   What can be the various types of events? --- See Primer/API bible.

	i) Difference between swapping and paging. 
	   ---- Swapping is moving entire processes between main memory
	   and hard disk. Paging is moving individual pages of a process.
	   
	j) Write a program to list all palindromes in a string.
	   ----- Hint: use a stack and some extra storage for remembering
	   previous palindromes.

	k) What's the outout?

		char *cp;
		int *ip;

		cp=(char *)0x100;
		ip=(int *)cp;

		ip++;
		cp++;
		printf("cp = %x ip = %x", cp, ip);

		Ans:cp = 0x101 ip = 0x102 ...(why?)

	l) What are static variables and functions? There are two files,
	   say, file1 and file2. file1 has a global declaration
			static int x;
	  file2 has a global declaration
			int y;
	  What is the difference between the two types of declarations
	  when you link file1 and file2? 
	  --- x is local to functions in file1 and cannot be seen by  
	      functions in file2. y can be seen by functions in both 
	      file1 and file2.

	m) How does a debugger set breakpoints in a code you are debugging?
	   ---- some funda regarding insertion if an interrupt instruction
	        in the code....don't know for sure.
	  (It seems that this q was also asked by some other company.
	   Worth knowing the answer.)

This was followed by a shady psychological test. You are given a 
set of six pictures. Look at each picture and write a story on each.

Second interview: (fully personal) --- This was more interesting;-)
	a) What did you feel about the ppt? --- wasn't very impressive
	  so gave some shady answer.
	b) Have you heard of creativity? -- Ya.
	   Have you heard of Bernard Shaw? -- Ya.
	   (Then he rattled off some quote of BS regarding creativity)
	   What do you say? --- I put some shadiest fundaes regarding
	   visionaries and Leonardo da Vinci conceptualising Helicopters
	   in his time!

************************************************************************
NOTE: If you have been offered a job previously by any other company
      after your BTech/BE or if you have even slightest of work experience
      then make it a point to mention about it.  It is a major plus point.
      The interviewers will be definitely interested in knowing that some 
      other company also found you good enough to be selected.
************************************************************************

***************************************************************************
Name: Vivekananda
Company name: Cadence design systems(I) P Lts, Noida.
Year: 1995
Area of work :
	They develop  CAD tools for VLSI design etc. 
	They call it EDA ( Electronic design automation)
	They expect people with good C knowledge, data structures ,
						compiler knowledge 
Selection procedure :
------------------
1. Written test 
	a. Logic and aptitude test - 20mts.
	b. software and hardware part -30 mts.
	  Software part - questions on datastres
		e.g. given inorder exp.and preorder exp. findout the postorder exp.,
		   binary tree insertion,
		   stacks - set of operations are given , predict the output..,
		   static variables..
	 Hardware part - 
		basic questions on digital systems such as K-maps, 
		DMA , floating pt. representation, signed integer representation,
		cache location etc.

2. Interview
	Technical Questions asked: For me almost Nil. 
			a)question: 
				what 'lex' does ?
	Personal Questions asked:
			a)question
			1. Tell me about urself, family background ..
			2. Btech projects and M.S. projects 
		( spend more time here, even if u have not done much
				  workl; create a good impression) 
			3. Significant achievements in life.
			   ( may be paper publications etc. )
			4. Why did u leave ur previous company ( If u were working)
			5. What do u expect from a company ?
			  ( like how shd be the work environment etc. etc. )

	 
************************************************************************






********************HCL-HP written test*******************
THE address of hughes is
HSSHR@hss.hns.com

A Vasudevan
vasu@hclhprnd.uunet.in

Note: Please call Mr Vijay (Ph 8279312) to confirm or reschedule the timing.
 

This is a very good question bank for written test of some software companies.
This can be passed freely to anyone. No restrictions of Class, Branch,
Institute , bla bla ...

Optimize the below 1,2,3,4 questions for time:

1)
int i;
if i=0 then i:=1;
if i=1 then i:=0;

2)
int i;
if i=0 then i:=1;
if i=1 then i:=0;
(given that i can take only two values (1,0))

3)
int i;
if i=0 then i:=1;
else if i=1 then i:=0;
(given that i can take only two values (1,0))

4)
int m,j,i,n;
for i:=1 to n do
m:=m+j*n

5) Expand the following
 a) ISDN
 b) CASE
 c) CSMA/CD
 d) OOPS
 e) MIMD

6) In the following questions, answer A,B,C,D depending on when 
the errors are  detected?
  A if no error is detected
  B if semantic and syntactic checking
  C if during Code genration & Symbol allocation
  D run time

a) Array overbound
b) Undeclared identifier
c) stack underflow
d) Accessing an illegal memory location

7) How many page faults will occur for below sequence of pages when LRU
page replacement algorithm is used ( The memory can only have 3pages):

1,2,3,4,2,1,5,2,4 (something like that) 



8) If a CPU has 20 address lines but MMU does'nt use two of them.
   OS occupies 20K. No virtual memory is supported. What is the 
   maximum memory available for a user program?

9) For a binary tree with n nodes, How many nodes are there which
  has got both a parent and a child?

10) Understand the funda of incrementing a variable using 
    val++   and ++val . Some programs are given for error correction.

11) Learn datagram . (Computer networks)

12) Which of the following can be zero? (only one)
    a)  swap space
    b)  physical memory
    c)  virtual memory


13) What is a must for multitasking?
    a) Process preemption
    b) Paging
    c) Virtual memory
    d) None of the above

14) A question on call by value,
		  call by name,
		  call by reference.

f(x,y,z)
{
y := y+1;
z := z+x;
}
main()
{
int a,b;
a := 2
b := 2;
f(a+b,a,a);
print a;
}

what is the value of a printed for three different calls in main.

15) Using the following instructions and two registers , A&B.
   find out A XOR B and put the result in A
   PUSH <reg>
   POP  <reg>
   NOR    These instructions operates with A & B and puts the result in
   AND     A

(question basically to get XOR in terms of NOR and AND)

16) True/False questions:
   1) The page size should be the power of 2.
   2) 


 
17) 
int i=0;
int j=0;

loop: 
  if(i = 0)
     i++;
  i++;
  j++;
  if(j<= 25)
    goto loop
xxx:   


question1 : how many times is the loop entered 
A few questions of that sort. some count fundaes. Easy one )

18)  Who handles page faults? 
  a) OS
  b) MMU
  c) Hardware logic
  d) etc etc....

19)  For which of following is it not possible to write an algorithm.

a) To find out 1026th prime number
b) To write program for NP-complete problem
c) To write program which generates true Random numbers.
etc...

20) what is the essential requirement for an real-time systems
 
a) pre-emption
b) virtual memory
c) paging  etc...


	-- Question bank collected ,compiled and edited by BPM and Baiju.



Name: Raju N N

Interviews Attended : Siemens, Motorola, NetQuest

	Company name: Siemens
	Year: 1995
	Technical Questions asked:
	1. Draw the Architecture of Unix ? I asked please elaborate
	He then told Draw the Unix Architecture !
	2. Suppose there are two processes communicating via TCP ports
	One of them on one machine dies. What  will happeen to the port?
	If another process is allocated that port will it receive
	garbage.?
	3. What are the various IPC mechanisms? Why is message passing
	coslier than semaphore?
	4. Name a simple scehme to communicate among two processes 
	on a same machine without the pipes, semaphores, shared memory
	message passing, sockets etc etc hi fi stuffs? Hint : Think Simple
	5. What are the tables and their relations when two processes access
	some files ?

	Company name: Motorola
	Year: 1995
	Technical Questions asked:
	1. Give a general algo for converting a m-ary tree to a 2-ary tree.
	2. How many links are there in a binary tree of N nodes? Give a
	proof?
	3. What are skew trees? For a tree with 4 nodes draw all possible 
	binary ? Generalise for n nodes how many binary trees can be drawn? 
	4. Have u used threaded trees anytime in your life time?


	Company name : NetQuest
	1. Assume a long linked list. Some nodes instead of pointing to
	their next node, point backwards. This is called a corrupted node.
	Give an algo in C to test whether a list is corrupted or not.
	No extra space in nodes, in efficient time. less memory. marks a
	function of time and storage used.
	2. A macro to test whether a number is a power of 2.
	3. There is a two-dimensional linked list. Each node has a, North,
	South, West, East pointers. Write fragment of C Code to do some
	interchanging stuffs. North points to West, West point to South et
	etc, ( A glorified version of reverse of linked list)
	4-7. Questions like these, basically pointer stuffs
	8 Assume there are two cubes. U can write one digit (0-9) on each
	of these sides, Write in such a way that when u keep two cubes side
	by side, u should be able to show all days in a month. (1-31)


Name: Srichand J

	Company name: INFOSYS
	Year: 1995
	Technical Questions asked:
		1. Explain your project
		2. What are your areas of interest in Appli Prog
	Personal Questions asked:
		1. Introduce yourself
		2. Why do you want to join INFOSYS
		3. Do you have a passport
		4. Have you taken GRE/TOEFL
		5. Will you go abroad
		6. Which prog is better - MTech or MS
		7. Which prog do people prefer - MTech or MS
		8. Why


Name: K. Bhuvaneshwari

1) Name of Company: Wipro InfoTech

Technical Questions: 
	Why doesn't fortran support recursion?
		Dynamic Storage allocation not there (I think)

	What is the problem with a software like ethernet monitor?
		No security and privacy for network users.
	
	Give page table format and translation of virtual address
	to physical address?
		Tanenbaum - os book
	
	Device Drivers in general and Streams drivers in particular
	What is a clone open in Streams?
		Sun Device Driver Manual (No. 17 I think not sure)
	
	CPU scheduling, which is best and why?
	Which will cause starvation?
		Tanenbaum - os book

	Deadlocks?
		Tanenbaum - os book

	Hierarchical resource allocation?
		Tanenbaum - os book

	How is a macro different from a function?
		Who doesn't know!

	Explain your research work?

	Summarize what you learnt in each of your course work.

2) Personal Questions:

	Some - They wouldn't be relevant to others.
		
Name of company: Novell

Technical Questions:

	Device Drivers, Structure of a streams driver.
		Sun Device Driver Manual (No. 17 I think not sure)

	How do you enforce consistency of data structures of the driver in a
	multiuser environment?
		Sun Device Driver Manual (No. 17 I think not sure)
	
	TCP/IP fundamentals.
		Internetworking with TCP/IP - Comer

	ARP/ RARP fundamentals.
		Internetworking with TCP/IP - Comer

	How long does a packet of size ... take to travel in an ethernet?
		Networks - Tanenbaum

	List all the process calls generated in Unix from the time a process
	is created till it dies?
		(GOK - God Only Knows!) Try Maurice Bach - might be there.

	Tell why fork and exec are implemented as two different calls and
	not as one?
		(GOK - God Only Knows!) Try Maurice Bach - might be there.

	Differentiate Repeater, Bridge, Router, Gateway.
	What is an adaptive learning bridge?
		Networks - Tanenbaum
	
	Explain your research work?

      Personal Questions:
	Hajaar - Wouldn't be relevant.

3) Oracle

Technical Questions:
	Explain your research work.

	Given a C program, tell me how it would go into the
	address space of the computer? Which would go where?
	There were uninitialized and initialized global
	variables and local variables and two functions?
		(I don't know)

	Distributed memory - cache consistency problem, issues and solutions.
		(Tanenbaum - os)

	Write a CPU Scheduler implemeting priority scheduling in 
	C language - 20 lines of code, 10 minutes time. Also
	give the data structure to use.
		Use a doubly linked list. Quite simple if you
		don't get tensed up.

Personal Questions:
	None.



Name : Neharika Adabala

	Company name:Motorola
	Year:1995
	Technical Questions asked:
			1)Describe Thesis work.
                        2)Are you interested in working in GUI
                        3)Are you interested in "List of user interface 
                          related software".
                        4)What is the latest in continuous speech recognition?
                        5)What other methods other than neural networks can be
                          used for recognition of speech?
                        6)What are the differences between pascal and C?
                        7)What is strongly typed?
                        8)What other differences......
	Personal Questions asked:
			a)Which other companies are you applying to?
                        
	Company name:TISL
	Year:1995
	Technical Questions asked:
          1)About project
          2)What will you do three years from now?
          3)Which other companies have you applied to?


>From kartik Sun Oct  1 09:41:23 1995
Return-Path: <kartik>
Received: from pterano by pelican.iitm.ernet.in (4.0/SMI-4.0)
	id AA01099; Sun, 1 Oct 95 09:41:22 IST
From: kartik (G. Kartik (CSRM))
Received: by pterano id <AA00650@pterano>; Sun, 1 Oct 1995 09:41:25 --5-30
Date: Sun, 1 Oct 1995 09:41:25 --5-30
Message-Id: <9510010411.AA00650@pterano>
To: bagi
Subject: Pl. add to qbank
Content-Length: 884
Status: R


Your Name: N.Sudha

	Company name: Wipro infotech
	Year: 1995
	Technical Questions asked:
			a)question
	DMA operation, cycle stealing, scope rules in C
	recursive function for fibonacci series generation,
	complexity for searching in binary trees.
			b)answer (if you know it)
	Personal Questions asked:
			a)question
			b)your response

	Company name: Cadence designs
	Year: 1995
	Technical Questions asked:
	Written test consisting of 
	1. Aptitude test,
	2. C programming and data structures,
	3. Digital electronics
	
	Personal Questions asked:
	in interview
			a)question
	my weakness, kinds of friendship, family details
			b) response
	They are impressed if one presents papers.
	 I have presented conference papers
	in the national level.

Generally most of the companies asks about the project.
Regarding other technical questions, they put questions
on the courses I did.


**********************************************************************

U.V.Ravindra - D.J.Ram's student. Passed out in Jan '95.
**********************************************************************

The first thing any IIT-ian should realize while attending Campus
Interviews is that the Companies have come to take you, and that
*you* are not looking for a job.  I refer to the attitude of the mind.
Therefore, there's no need to treat it as a life and death issue.  In
my opinion, several students take this matter as a very serious career
issue, and think that if they don't get a job in the campus
interviews, they are sunk.  This is not true.  A good case in point
will be Sudhakar's, who didn't get any job that he wanted in the
Campus Interviews, but when he came to Bangalore and applied to the
different companies, he landed a job in *every* company he applied
for.  And these companies were by no means insignificant ones: Tata
Elxsi, Wipro Infotech, Novell, C-DAC ... all those which are
considered to be respectable employers.  So, the catch phrase during
Campus Interviews is, "don't panic, be cool, relax, you have *nothing*
to lose, and everything to gain."  This is the attitude you should
have in mind when you go for the interviews.

About the companies, now.  There are mainly two kinds of companies in
Bangalore.  Those that are small, like Tata Elxsi and Novell, with a
more or less flat organizational structure, and those that are very
huge, like Wipro and TISL, where there's a veritable population
explosion.  There are merits and demerits of both.  In the small
organizations, there are fewer people, so it is easy to make your
presence felt and to make yourself noticed, and to get proper credit
for what you are doing.  The flip side of the coin for these
organizations is that you have to be very careful in what you say and
do, for everything you do/say is audible at the highest levels, and,
as the American Police say when they are arresting a criminal
"anything you say may be used against you."  Smaller organizations
also have a flatter structure, so the amount of responsibility on your
shoulders may be quite heavy.  In one sense it is good -- you can
contribute well to the organization and get credit for it, but in
another sense it is bad, for you may have to work late and quite hard
too.  The advantages of being in a large organization like Wipro is
that you will never be *overloaded* with work, unless you choose to do
so yourself.  You can be in the company as you are in the CS
Department right now, light-headed and carefree, even a bit careless.
The obverse side of the coin here is that in such huge organizations,
you will never be anything but small fry in a big pond ... and getting
credit where it is due may be a little difficult (specific reference
to TISL here).

Another issue that should be considered when seriously aiming at a
company is the nature of the job that you will be put in.  In my
honest opinion, since the pay structures of most companies are
verisimilar now, and the salary differential between employees of
different companies is very minimal, the nature of work is the most
important criterion that one should pay attention to.  If you are
specifically inteFrom vsr@ece.iitkgp.ernet.inThu Dec  4 08:56:08 1997
Date: Thu, 2 Oct 1997 18:35:59 +0500
From: "V.Sreenivasulu.Reddy" <vsr@ece.iitkgp.ernet.in>

Hai Narsi,

I'm sending  this paper, U can give to any one of Ur friends.
OK. If U can please try for TATA Infotech, and ramco, for my friend.
He can receive that mail.



I'm going to chirala tomorrow, If any thing to inform mail immediatly.
I'll come backk om 20th, will mail after that.

Try for the above paper.

Bye,
JAYA SEKAHR. M



mail:
     u9434110@iitkgp.ren.nic.in
     vsr@ece.iitkgp.ernet.in


		Intergraph
                ----------
> 
> 
> 7.Interchanging strings and numbers          Ans C
> 8. Matricide:Mother:: Homicide:?           AnsHuman
> 9.Some Mammels are Vertebrates 
>   Some Vertebrates are.......          Ans d
> 10. Figure patteren: --|--.......etc. direction changes problem.
> 11.  work problem.........etc. (not clear).
> 
> 
> 
> C TEST
> 
> 1. main()
> { 
> int arr[100];
> int c:
> int N;
> for(i=-:i<N;i++)
>  arr[i]=i;
>  minvalue i = .....
>  Maxvalue i = .....                    Ans 0,100 resp
> 
> 
> 2. Union Problem .....                  Ans : a or c
> 3. for n=2 the following fn returning value is  
> int fun(int n)
> {
> for(i = 1;i<=n;i++)
> for(j=i;j<=i;j++)
> sum=sum+j;
> return(sum);
> }                             Ans 6
> 
> 
> 
> 
> 4. Calculate sum=1+1+2+1+2+3+1......
>               Ans i<=x;j<=i
> 5. for x=2 y=3 z=1
> the following fn return
> int fun(int n; int y; int z)
> {
> int sum 
> for(i=x;i<=y;i++)
> for(j=1;j<=z;z++)
> sum=sum+z;
> return sum
> }   
>        Ans 0(check)
> 
> 6. The values of sum from above fn
> for x=0; y=0;z=1   Ans 1
> 7.how can you insert the following values in stack and numbers 10,20,30,40,50.60
> stack [][][][][][]
> numb [][][][][][][]
> 
> Ans 
> 60 50 40 30 20 10 
> 10 20 30 40 50 60
> check.
> 
> 8. # if ndif XYZ
> 
> #include "XYZ.h"
> #endif
> what is meaning  ?
> Ans:
> if XYZ is not defined then only include the header file XYZ.h.
> 
> 9. p:malloc(int*sizeof(int));
> 
> ans: a
> 
> 10.a=5 b=10 c=7
> (a>c)?a:((b>c)?b:c)     ans 10
>  11. debugging eliminates  Ans[c]
>  ans: both logical & ruin time errors.
>  12. int term (int x)
>  { int sum=0;int i;
>  for(i=0;i<=5;i++)
>  sum+=x;                     /*problel is wrong but Ans is correct and is 650.*/
>  return(sum);
>  }             Ans 650
>  the above fn value for x=150
>  13.int x;
>  scanf("%d",x);
>  -------------
>  --------------
>  what is error in the above program
> 
> 14.int a[] = { 1,  , 9,2.......}
> int *p;
> p=&a[2];
> printf("%s",p);
> a)7    b)2  c)4407    d)none
> 
> ans: d
> 15.a[][] = {1,2},{3,4} 
> b[] [] ={ 
> void fun(A,B)
> int i,j;
> for(i=1;i<N;i++)
> for(j=1;j<N;j++)
> sum=sum+A[i][j];
> return sum;
> }
> what is wrong in the above function?
> 
> 16. OTHER QUESTIONS ARE MAINLY CONCENTRATED ON ERRORS LIKE
> (i)syntax (ii) runtime (iii) logical (iv) debugging.
> 
> 17. A binary tree with depth of '3' has max  kof 20 nodes  ans: no.
> 18. breadth search and depth search in binary tree.
>        ANALYTICAL
>  
              
> 1.20%loss;20 % gain  Ans 4% loss 
> 2.Order problem     Ans : Bo,Ka,A,Tp   Ans Bo
> 3.10%5+3*2-3  ans:5
> 4.Calls:Tissus::Atom:?  Ans:Molecules
> 5.cube problem( 32 bigger+4 smaller cubes)-> R.S.Aggrawal nonverbal
>                                                ->pg 92: 5 questions
> 6 PQRSTU->problem-> Verbal Reasoning -> .......do.......pg 430 : 5 question.
> 7 problem -> verbal reasoning -> rs aggrawal pg 207 Quest  17 to 21.
> 
> 
>                       C TEST
> 
> 1. malloc ?   2. char * p =" hwllo world " , what is wrong?
> 3. char *(*(*a(N))())();?
> 4.*p++ = ?
> 5 int i=7
> printf( "%d \n",i++ i++) o/p =? ans 56
> 6.n=2  pow((2.0,n),++n)?
> 7 #define macro for ( i,g) ?
> 8. int reg=2  is there any wrong ? write a reason
> 9. #define max 10
>   p=&(a+b);
>   q=*max;
>   }   what is wrong
> 
> 
>   10. strcat( string,'O');
>   wrong? werite reason?
> 11.char *s=char * ....
>         else (string)....? wrong? write reason?
> 
>         PSG PAPER:    ARITHMETICS
> 
> 1. Venn diagram for white, clothes,flowers
> 2.Male members ABCDEF,  female members PQRSTU
>   This problem is same as in rs aggrawal [5questions]
> 3.   not clear.
> 
> 4. IMS material    A sales person problem.
> [5 question]      conditions: M must visit before P&Q
>                               R "    "      " MNOPQRS
> 5. A containor contains 40 lt milk, 8 lt water 
> 
> ans:( 0.80)^3 * 40 = 20.41lts.
>  6. direction problem (playing cards)         Ams south-west.
> 
> one question on time ans is [c] i.e 90 hr's.
> 

------------------------------------------------------


From 96pg072 Sun Oct 12 11:01:21 1997
Return-Path: <96pg072>
Received: by karthika.reccal.ernet.in  (8.6.12/gw.1.0)
	id LAA05676; Sun, 12 Oct 1997 11:01:20 +0500
Received: from milan.doe.ernet.in by karthika.reccal.ernet.in  (8.6.12/gw.1.0)
	id SAA02981; Thu, 9 Oct 1997 18:43:52 +0500
Received: from cello.cs.iitm.ernet.in ([206.103.12.228]) by milan.doe.ernet.in (4.1/SMI-4.1)
	id AA00639; Mon, 6 Oct 97 08:25:55+050
Received: from brahma.iitm.ernet.in (root@brahma.iitm.ernet.in [144.16.224.3]) by cello.cs.iitm.ernet.in (8.7.5/8.6.9) with ESMTP id IAA04857 for <96pg072@karthika.reccal.ernet.in>; Mon, 6 Oct 1997 08:24:23 +0530
Received: from violet.iitm.ernet.in by brahma.iitm.ernet.in; (8.7.6/1.1.8.2/07Feb96-0917AM)
	id IAA03061; Mon, 6 Oct 1997 08:14:33 +0530
Received: by violet.iitm.ernet.in (AIX 3.2/UCB 5.64/4.03)
          id AA16650; Sun, 5 Oct 1997 16:57:59 GMT
Date: Sun, 5 Oct 1997 16:57:59 GMT
From: mepg9618@violet.iitm.ernet.in (Srihari K)
Message-Id: <9710051657.AA16650@violet.iitm.ernet.in>
To: 96pg072@reccal.ernet.in
Status: RO
X-Status: 

Dear Murthy! Yaa! you are luck fellow. I got HCL full paper. I am mailing it.
The quetions are in order. So you no need to prepare answers and mugging that
that quetions. Just you mug that answers which are in order or you write all
these answers on the hand compactly while you are going to exam.

 Paper Model:
  Section I:   computer awareness(i.e general things about computer)   Q.15
  											             -ve marks: 1/4
            
  Section II:  Simple  C- language  		Q. 15     &  -ve marks: -1/4 

  Section III: On pointers & structures
                and C++,JAVA( only 1 on this)  Q.10    each quetion ->2 marks
													   -ve marks: -1
  Section IV:   Analytical                   Q.20     each quetion -> 2 marks. 
													   -ve marks: -1/4


Murthy from each section I am giving one are to quetions also because for
checking whether the same paper or not.
    And for doubtful answers also I am writing quetions but not writing answers
for these quetions.


								Section-I

1). Piggy backing is a technique for 

a) Flow control b) sequence  c) Acknowledgement   d) retransmition

ans:   c    piggy backing


2). The layer in the OST model handles terminal emulation

a) session  b) application  c) presentation  d) transport

ans: b  application

3)  ans:  a		odd numbers of errors

4)Q.	In signed magnitude notation what is the minimum value that can be represented with 8 bits

a) -128  b) -255  c) -127  d) 0

5) c		20

6) a		120

7) b		synchronise the access

8) a		system call

9) b		the operating system

10) a		177333

11) d   	used as a network layer protocall in network and windows system

12) b		has to be unique in the sub network 

13)Q. there is an employer table with key feilds as employer no. data in every
 n'th row are needed for a simple following queries will get required results.

  a) select A employe no. from employe A , where exists from employe B
where A employe no. >= B employe having (count(*) mod n)=0 
  b) select employe no. from employe A, employe B where
A employe no. >= B employ no.   grouply employe no. having (count(*) mod n=0 )
  c) both a& b
  d)none of the above

14)Q. type duplicates of a row in a table customer with non uniform key feild
customer no. you can see

a) delete from costomer where customer no. exists 
( select distinct customer no. from customer having count )
b) delete customer a  where customer no. in
(select customer  b where custermer no. equal to b custemor no. ) and a rowid >
b rowid
c) delete customer a where custermor no. in 
( select customer no. from customer a, customer b )
d) none of the above

15)  c		Volatile modifier


----------   Section I over with 15 quetions   -------------------



 						SECTION-II

Section II is not covered completly But it is very very easy. You can do it 
 very easely.


1)   ans: recursion 

2) long int size 
   a) 4 bytes  b) 2 bytes  c) compiler dependent  d) 8 bytes
ans: compiler dependent
note: order of a,b,c,d are doubt but answer is correct.

3) x=2,y=6,z=6
x=y==z;
printf(%d",x)    ?

4) if(x>2)?3:4  

5)

6) 

7)  ans: c  6  ( quetion on enum )

8) ----
---
---
--
14)  c : class A,B and C can have member  functions with same name.

15)  ans: d       none of the above 








                       SECTION-III


1) ans: b		It  does not work when rp is the last element in the linked list

2) ans: a   	always

3) ans: b 		13

4) ans: b       16

5) ans: d       55,55

6) ans: c   	    5,10,10,3

7)  ---

8) ans:d		4

9) ans: c		5

10)ans: c       semicolon missing



 						SECTION-IV




following are not in order:

 2. M > D > Y        ans: (a)
 
 6. 10 in 4 seconds,
     ? in 6 minutes         = 10x6x60/4  = 900    ans: (a)

 7. a=2, b=4, c=5
      (a+b)/c - c/(a+b) = 11/30 (ans).

 8. 100(100000000+100000000)/10000 = 2x1000000 (ans).

 9. what does the hexanumber E78 in radix 7.
    (a) 12455  (b) 14153  (c) 14256  (d) 13541  (e) 131112   ans: (d)

 10. Q is not equal to zero   and  k = (Q x n - s)/2    find  n?
    (a) (2 x k + s)/Q  (b) (2 x s x k)/Q   (c) (2 x k - s)/Q
    (d) (2 x k + s x Q)/Q   (e) (k + s)/Q




  (from GRE book page no:411)
    data:
     A causes B or C, but not both
     F occurs only if B occurs
     D occurs if B or C occurs
     E occurs only if C occurs
     J occurs only if E or F occurs
     D causes G,H or both
     H occurs if E occurs
     G occurs if F occurs

NOTE: check following answers.

 11. If A occurs which of the following must occurs
     
      I. F & G
     II. E  and H
    III. D

    (a) I only   (b) II only  (c) III only  (d) I,II, & III
    (e) I & II (or) II & III but not both             ans: (e)

 12. If B occurs which must occur

    (a)  D   (b) D and G  (c) G and H  (d) F and G  (e) J   ans: (a)

 13. If J occurs which must have occured

    (a) E  (b) either B or C  (c) both E & F  (d) B  (e) both B & C  ans: (b)

 14. which may occurs as a result of cause not mentioned

    (1) D   (2) A   (3) F

    (a) 1 only  (b) 2 only  (c) 1 & 2  (d) 2 & 3  (e) 1,2,3    ans: (c)

 15. E occurs which one cannot occurs

    (a) A   (b) F   (c) D   (d) C   (e) J              ans: (b)

 11 to 15:-    -----------  e , a , b , c , b ---------------






Below are in order:

 16.  to  20.  answers:    

e
a
c
a
e




            ---------------  over ----------------

                  BEST OF LUCK

 In written test in each section you have to get minimum marks i.e you have to pass in each section.  There will be questions from C, C++, JAVA. about 10 questions in C++ in the written test.
           






INTERVIEW: 		I will send interview quetions tomorrow early morning.



Murthy to Duet technologies coming to our campus. If you have paper
send it. Send me RAMCO paper IMMEDIATELY. I have need Ramco aptitude.


ok
yours lovingly
srihari.K

The question paper is
THIS PAPER CONSISTS OF TWO SECTIONS.
SECTION 1 INTURN CONSISTS OF THREE PARTS.
PART 1
      VERBAL
                IT CONSISTS OF 40 WORDS WHICH HAS 5 MULTIPLE ANSWER
S
    FOR THEM.THE MAIN WORDS WHICH I REMEMBER ARE AS FOLLOWS FOR WHI
CH
    YOU SHOULD LEARN THE SYNONYMS OF THESE
merry
gay
alienate
solicit
heep
cargo
momentary
volume
veer
disperse
admonish
meager
latitude
latent
covet
discretion
potential
emanicipate
lethargy
wethargy
concur
confiscate
dispel
baffle
subside
mesery
pretentious
tranquil
efface
effigee
abstinate
obstinate
hover
caprice
belate
renainance
abstriate
obstinate
hover
caprice
belate
brim
divulge
lamont
bileaf
embrace
adhesive
missirable
SECTION 1        PART B        20MIN    30 marks 15 QUANTITATIVE.
THESE ARE SOME PROBLEMS :
1.  two pencils cost 8 cents. then 5 pencils cost?
(20 cents)
2. A work is done by the people in 24 minutes.  One of them can do
this workalonely in 40 minutes.  How much time to do the same work
for the second person?
(60 minutes)
3. A car is filled with four and half gallons of fuel for a round t
rip.
Fuel is taken 1/4 more in going then coming.  What is the fuel
consumed in coming up? (2 gallons)
4.Low temperature at the night in a city is 1/3 more than 1/2 high
as
higher temperature in a day.  Sum of the low tem. and highest temp.
is 100 degrees.  Then what is the low temp? (40 deg.)
5. A person, who decided to go to weekened trip should not
exceed 8 hours driving in a day.  Average speed of forward journey
is 40 m/h. Due to traffic in sundays, the return journey average sp
eed
is 30 m/h. How far he can select a picnic spot?
        a) 120 miles
        b) between 120 and 140 miles
        c) 160 miles
ans: 120 miles
6. A salesperson multiplied a number and get the answer 3,
instead of that number devided by 3.
what is the answer he actually has to get?
                1 * 3 = 3
                so number = 1
                devided by 3, the ans. is 1/3.
7. A ship started from port and moving with I miles per hour and an
other
ship started from L and moving with H miles per hour.
At which place these two ships meet?
    |----|----|----|----|----|----|
  port   G    H    I    J    K    L
8. A building with height D shadow upto G. A neighbour building wit
h
what height shadows C feet.
    |----|----|----|----|----|----|----|
    A    B    C    D    E    F    G    H
9. A person was fined for exceeding the speed limit by 10 mph.
Another person was also fined for exceeding the same speed limit
by twice the same.  If the second person was travelling at a
speed of 35 mph, find the speed limit.  (15 mph)
10.A bus started from bustand at 8.00am, and after 30 minutes stayi
ng
 at destination, it returned back to the busstand.  The destination
 is 27 miles from the busstand.  The speed of the bus is 18mph.  In
 return journey bus travels with 50% fast speed.  At what time it r
eturns to th
e
busstand? (11.00am).
 11.In a mixture, R is 2 parts, S is 1 part. In aoder to make S to
 25% of the mixture, howmuch r is to be added?
SECTION-1   PART-3      marks-50  questions-50  30 min
                CRITICAL REASONING
It is very difficult to reproduce them and so we are giving here th
e
first question of the section so that you may have a general idea o
f the
section.Be careful time management is important.
YOU HAVE TO MARK YES, NO OR WE CAN'T SAY..
My father is only child to his father.My father has three sisters.
All are married and have two children each.
1) My grandfather has two sons.
2) I am having six cousins.
3) I have
This much paper I have .I will send some other papers later on.
bye bye
                                                  yours ,
						  papineni ravi
------------------------------------------------------------------------------



THIS PAPER CONSISTS OF TWO SECTIONS.
SECTION 1 INTURN CONSISTS OF THREE PARTS.

PART 1
      VERBAL---
		IT CONSISTS OF 40 WORDS WHICH HAS 5 MULTIPLE ANSWERS
    FOR THEM.THE MAIN WORDS WHICH I REMEMBER ARE AS FOLLOWS FOR WHICH
    YOU SHOULD LEARN THE SYNONYMS OF THESE---
merry
gay
alienate
solicit
heep
cargo
momentary
volume
veer
disperse
admonish
meager
latitude
latent
covet
discretion
potential
emanicipate
lethargy
wethargy
concur
confiscate
dispel
baffle
subside
mesery
pretentious
tranquil
efface
effigee
abstinate
obstinate
hover
caprice
belate
renainance
abstriate
obstinate
hover
caprice
belate
brim
divulge
lamont
bileaf
embrace
adhesive
missirable

SECTION 1        PART B        20MIN    30 marks 15 QUANTITATIVE.
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
THESE ARE SOME PROBLEMS :
1.)  two pencils cost 8 cents. then 5 pencils cost?
(20 cents)
2. A work is done by the people in 24 minutes.  One of them can do
this workalonely in 40 minutes.  How much time to do the same work
for the second person?
(60 minutes)
3. A car is filled with four and half gallons of fuel for a round trip.
Fuel is taken 1/4 more in going then coming.  What is the fuel 
consumed in coming up? (2 gallons)
4.Low temperature at the night in a city is 1/3 more than 1/2 high as 
higher temperature in a day.  Sum of the low tem. and highest temp. 
is 100 degrees.  Then what is the low temp? (40 deg.)
5. A person, who decided to go to weekened trip should not 
exceed 8 hours driving in a day.  Average speed of forward journey
is 40 m/h. Due to traffic in sundays, the return journey average speed
is 30 m/h. How far he can select a picnic spot?
	a) 120 miles
	b) between 120 and 140 miles
	c) 160 miles
ans: 120 miles
6. A salesperson multiplied a number and get the answer 3,
instead of that number devided by 3.
what is the answer he actually has to get?
		1 x 3 = 3
		so number = 1
		devided by 3, the ans. is 1/3.
7. A ship started from port and moving with I miles per hour and another
ship started from L and moving with H miles per hour.
At which place these two ships meet?

    |----|----|----|----|----|----|
  port	 G    H    I    J    K    L

8. A building with height D shadow upto G. A neighbour building with 
what height shadows C feet.

    |----|----|----|----|----|----|----|
    A    B    C    D    E    F    G    H

9. A person was fined for exceeding the speed limit by 10 mph.
Another person was also fined for exceeding the same speed limit 
by twice the same.  If the second person was travelling at a 
speed of 35 mph, find the speed limit.  (15 mph)
10.A bus started from bustand at 8.00am, and after 30 minutes staying
 at destination, it returned back to the busstand.  The destination 
 is 27 miles from the busstand.  The speed of the bus is 18mph.  In
 return journey bus travels with 50% fast speed.  At what time it returns to the busstand? (11.00am).
 11.In a mixture, R is 2 parts, S is 1 part. In order to make S to 
 25% of the mixture, howmuch r is to be added?



SECTION-1   PART-3	marks-50  questions-50  30 min
		
		CRITICAL REASONING

It is very difficult to reproduce them and so we are giving here the 
first question of the section so that you may have a general idea of the
section.Be careful time management is important.
YOU HAVE TO MARK YES, NO OR WE CAN'T SAY..
My father is only child to his father.My father has three sisters.
All are married and have two children each.

1) My grandfather has two sons.
2) I am having six cousins.
3) I have three uncles.

========================================================================
>  	 CITYCORP PAPER (analytical reasoning). remaining 
> questions(SOME PART OF THE PAPER ONLY) .
> 
> Q 1) In a group of five persons A, B, C, D and E  (a) A and C are 
> intelligent in English and Reasoning. (b) B and c are intelligent in 
> English and General Awareness. (c) E and D ar intelligent in Arithmetic 
> and Interview (d) E is intelligent in Interview, Reasoning and Arithmetic.
> (e) B and D are intelligent in Arithmetic and General Awareness.
> 
> 1] Who is intelligent in English, Arithmetic, and General Awareness
> Answer B
> 2] Who is intelligent in English and Reasoning but not in General Awareness
> Ans A
> 3] Who is intelligent in Arithmetic, General Awareness and Interview
> Ans D
> 4] Who is intelligent in English, General Awareness and Reasoning
> Ans C
> 5] Who is intelligent in Arithmetic, Reasoning and Interview
> Ans E
> 
> Q 2) Five persons A, B, C, D and e were tavelling in a car. There were 
> two ladies in the group. Of three who knew car driving one was a lady.
> A is brother of D. B wife of D, drive at the begining. E drive at the end.
> 
> 1] Which of the following is a pair of brothers.
> Ans AD
> 2] Who was the other lady in the group
> Ans C
> 3] In the case of which of the following pairs, no relationship can be 
> established with one else in the group
> Ans CE
> 4] How was E related to A
> Ans Data inadequate
> 5] A man said to a woman "Your only brother's son is my wife's brother". 
> How is the woman related to the man's wife
> Ans Aunt
> 
>  ALL THE BEST DO WELL THE INTERVIEW, IT IS SIMPLE THEY WILL ASK FAMILY 
> BACK GROUND AND SOME TECHNICAL QUESTIONS.
> 
  
ALL COMPANIES WILL NOT GIVE ELIGIBILITY TO MTECHS.SO YOU HAVE TO DECIDE 
AND COME> 
