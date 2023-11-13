//linear queue implementation (menu driven-switch case)
//linear q means if we set size of q to say 5, then add 5 elements and then delete 1 element; then technically there is 1 space available, but since this is a linear q, when we try to enq they say space full!

#include <stdio.h>

int rear, front;
int queue[5];    //we declared an array named queue with fixed size 5 

void enq(int x){           //enqueue function of q

    if(rear==4){
        printf("Queue is full!\n");
    }
    
    else if(front==-1 && rear==-1){
    
        front=0;
        rear=0;
       
        queue[rear]=x;
    } 
    
    else{
        rear++;
        queue[rear]=x;
    }
}

void dq(){				//dequeue function of q

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
        front++;
    }
    
    printf("The deleted element is: %d",queue[temp]);
    printf("\n");
}

void display(){

	if(front==-1 && rear ==-1){
		printf("Queue is empty!\n");
	}
	
	else{
		for(int i=front;i<=rear;i++){
			printf("%d",queue[i]);
			printf("\t");
		}
		printf("\n");
	}
}

int main(){
    rear=-1;
    front=-1;
    int c;
    
    
    while(1){                  //we use switch case to display the menu driven operations
    
        printf("Press 1 to perform enqueue operation in the queue: \n");
    	printf("Press 2 to perform dequeue operation in the queue: \n");
    	printf("Press 3 to display the queue: \n");
    	printf("Press 4 to exit: \n");
    	printf("\n");
    	printf("Enter choice: ");
    	scanf("%d",&c);
    	
    	switch(c){
    		case 1:
    			printf("Enter element to insert into the queue: ");
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

