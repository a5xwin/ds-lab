//circular queue implementation (menu driven-switch case)

#include <stdio.h>

int rear, front;
int queue[5];    //we declared an array named queue with fixed size 5 



void enq(int x){          

    if((rear+1)%5==front){
        printf("Queue is full!\n");
    }
    
    else if(front==-1 && rear==-1){
    
        front=0;
        rear=0;
       
        queue[rear]=x;
    } 
    
    else{
        rear=(rear+1)%5;
        queue[rear]=x;
    }
}

void dq(){			

    int temp;
	
    if(rear==-1 && front==-1){
        printf("Queue is empty!\n");   
    }
    
    else if(front==rear){
    	temp=front; //because we need to print the deleted element too, so we should store it somewhere before deleting.
        front=-1;
        rear=-1;   
    }
    
    
    else{

    	temp=front;
        front=(front+1)%5;
    }
    
    printf("The deleted element is: %d",queue[temp]);
    printf("\n");
}

void display(){

	if(front==-1 && rear ==-1){
		printf("Queue is empty!\n");
	}
	
	else{
        int i=front;
        while(i!=rear){

            printf("%d",queue[i]);
            printf("\t");
            i=(i+1)%5;
        printf("\n");
        }	
        printf("%d",queue[rear]);
	}
}

int main(){
    rear=-1;
    front=-1;
    int c;
    
    
    while(1){                  //we use switch case to display the menu driven operations

        printf("\n");    
        printf("Press 1 to perform enqueue operation in the circular queue: \n");
    	printf("Press 2 to perform dequeue operation in the circular queue: \n");
    	printf("Press 3 to display the queue: \n");
    	printf("Press 4 to exit: \n");
    	printf("\n");
    	printf("Enter choice: ");
    	scanf("%d",&c);
    	
    	switch(c){
    		case 1:
    			printf("Enter element to insert into the circular queue: ");
        		int x;
        		scanf("%d",&x);
        		enq(x);  
        		break;
        		
        	case 2:
        		dq();
        		break;
        		
        	case 3:
        		display();
        		break;
        		
        	case 4:
        		return 0;
        		break;
        		
        	default: printf("Invalid choice! \n");
        		 printf("\n");
        	
         }
        
    }
    
 }

