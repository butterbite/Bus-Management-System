#include <stdio.h>
#include<conio.h>
#include<string.h>
void booking();
void inputs();
void data();
void mybookings();
void bookingsuccess();
void bus1();
void bus2();
void bus3();
void name();
void delete1();
void ticketdetails();
void ticketdetails2();
void ticketdetails3();
struct booki
{
	int no;
	char name[20];
	char source[12];
	char destination[12];
	int choice;
	char ch;
	int delkey;
}book;
main()
{    puts("\n\n\n");
	gohere: 
	puts("\n\n\n");
	printf("\t\t!! Welcome To Indian Bus Reservation System !!\n\n\n\n");
	//printf("\nEnter Your Desired Choice Number\n\n\n\n");
	
	
	printf("\t\t\t\!! Press R To Search For Your Route\n\n ");
	printf("\t\t\t\!! Press D To Delete Your Booking\n\n");
	printf("\t\t\t\!! Press M To Go To My Bookings\n\n");
	scanf("%s",&book.ch);
	switch(book.ch)
	{
		case 'R':
			data();
			goto gohere;
			break;
			case 'D':
				delete1();
				goto gohere;
				break;
				case 'M':
	mybookings();
	goto gohere;
	break;
	}            
	
	
	
}

void booking()
{
	 printf("           \"Please Choose Your Seat No\n\n");
            int a[11][6], i , j;

	for (i = 0; i < 7; i++)
	{
	int	a[7][5] ={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25},{26,27,28,29,30},{31,32,33,34,35} }; 
		printf("\t");
		for ( j = 0; j < 5; j++)
		{
			
			printf("%d", a[i][j]);
			printf("\t");
		}
	printf("\n\n");
}
}
void inputs()
{
	printf("\t\tEnter Your Seat Number\n\n");
	scanf("%d",&book.no);
}
void data()
{
	printf("\t\tEnter Your Source\n\n");
	scanf("%s",&book.source);
	printf("\t\tEnter Your Destination\n\n");
	scanf("%s",&book.destination);
	printf("\t\tBus No 1:\n\t\t");
	printf("\t\tBus Name:  Rishabh Travels\n\t\t");
	printf("\t\tTime: 17:00\n\t\t");
	printf("\t\tFare: Rs.935/-\n\t\t"	);
    printf("\n\n");
    printf("\t\tBus No 2:\n\t\t");
    printf("\t\tBus Name:  Mahesh Travels\n\t\t");
    printf("\t\tTime: 15:30\n\t\t");
    printf("\t\tFare: Rs.975/-\n\t\n\n");
    printf("\n\n");
    printf("\t\tBus No 3:\n\t\t");
	printf("\t\tBus Name:  Shrinath Travels\n\t\t");
	printf("\t\tTime: 15:00\n\t\t");
    printf("\t\tFare: Rs.600/-\n\t\t"	);
    printf("\n\n");
	
            
            printf("\t\tEnter Your Choice\n");
            scanf("%d",&book.choice);
            if(book.choice == 1)
            {
            
            booking();
            inputs();
            name();
            bookingsuccess();
            ticketdetails();
        }
            else if(book.choice==2)
            {
            	booking();
            inputs();
            name();
            bookingsuccess();
            ticketdetails2();
            }
			else if(book.choice==3)
            {
            		booking();
            inputs();
            name();
            bookingsuccess();
            	ticketdetails3();
            }
}
void bookingsuccess()
{
	printf("\t\t\!! Your Seat Was Booked Successfuly \!!\n\n");
}
void name()
{
	printf("\t\tEnter your name\n\n");
	scanf("%s",&book.name);
}
void ticketdetails()
{
	printf("\t\tName:%s\n",book.name);
	bus1();
	printf("From:%s\n",book.source);
	printf("\t\tTo:%s\n",book.destination);
	printf("\t\tSeat No:%d\n",book.no);
}
void ticketdetails2()
{
	printf("\t\tName:%s\n",book.name);
	bus2();
	printf("\t\tFrom:%s\n",book.source);
	printf("\t\tTo:%s\n",book.destination);
	printf("\t\tSeat No:%d\n",book.no);
}
void ticketdetails3()
{
	printf("\t\tName:%s\n",book.name);
	bus3();
	printf("\t\tFrom:%s\n",book.source);
	printf("\t\tTo:%s\n",book.destination);
	printf("\t\tSeat No:%d\n",book.no);
}

void bus1()
{
	
		printf("\t\tBus Name:  Rishabh Travels\n\t\t");
		printf("Time: 17:00\n\t\t");
		printf("Fare: Rs.935/-\n\t\t"	);
        printf("\a");
}
void bus2()
{

            printf("\t\tBus Name:  Mahesh Travels\n\t\t");
            printf("Time: 15:30\n\t\t");
            printf("Fare: Rs.975/-\n");
            printf("\a");	
}
void bus3()
{

            
			printf("\t\tBus Name:  Shrinath Travels\n\t\t");
			printf("Time: 15:00\n\t\t");
            printf("Fare: Rs.600/-\n"	);
            printf("\a");	
}
void delete1()
{
	
	printf("\n\t\tEnter Your Seat Which You Want To Delete\n\n");
	scanf("%d",&book.delkey);
	if(book.no==book.delkey)
	{
		printf("\t\tTicket Was Deleted Successfully");
		
	}
	else{
		printf("\n\n\t\tBooking Does Not Exist\n\n\n");
	}
}
void mybookings()
{
	if(book.choice==1)
	{
	puts("\t\t\t\!!Your Booking Status Is\n\n\n");
	ticketdetails();
}
	else if(book.choice==2)
	{
    puts("\t\t\t\!!Your Booking Status Is\n\n\n");
	ticketdetails2();
}

	else if(book.choice==3)
	{
	puts("\!!\t\t\tYour Booking Status Is\n\n\n");
	ticketdetails3();
}
}
