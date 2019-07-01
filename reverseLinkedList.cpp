//Name : Karan Bhatia
// ID : 201801417
//Date : 15th March 2019
//Program : Linked List realisation and operations

#include<iostream>
using namespace std;

template <typename E>
class List
{
    void operator = (const List&) {}
    List(const List&) {}

    public:
        //constructors and destructors
        List() {}
        virtual ~List() {}

        //Return the number of elements in the List
        virtual int NumberOfElements()  = 0;

        //Return the Location of current element
        virtual int CurrentLocation() const = 0;

        //Return the data of current element
        virtual const E& getData() const = 0;

        //clear all the data from the List
        virtual void clearList() = 0;

        //insert a data in the List at current location
        virtual void insertElement(const E& data) = 0;

        //insert a data in the end of the List
        virtual void append(const E& data) = 0;

        //delete a data at the current Location
        virtual E Remove() = 0;

        //set the current Location to the start of the List
        virtual void setListLocationToStart() = 0;

        //set the current Location to the end of the List
        virtual void setListLocationToEnd() = 0;

        //set the current Location to the element on left side
        // of current element
        virtual void previousElement() = 0;

        //set the current Location to the element on left side
        // of current element
        virtual void nextElement() = 0;

        //Set current Location to a new Location
        virtual int setToNewLocation(int location) = 0;

        };
    template<typename E>
    class Node{
       public:
       Node* next;
       E data;
       };
      template <typename E>
class LinkedList: public List<E>
{
  Node<E>* head;
  Node<E>* tail;
  Node<E>* current;
  int numberOfElements;
  int listLocation;
  public:
  LinkedList()
  {
    head=tail=current=NULL;
    numberOfElements = 0;
    listLocation=-1;
  }
   int NumberOfElements(){
   Node<E>*ptr;
   ptr = head;
   int counter=0;
   while(ptr!=NULL)
   {
       counter+=1;
       ptr=ptr->next;
   }
   numberOfElements = counter;
   return counter;
   }
 void insertElement(const E& Data)//enters data at the end of the list
        {

		if(head==current)
		{
			Node<E>* nn=new Node<E>;
			nn->data=Data;
			nn->next=head;
			head=nn;
			current=head;
		}

		else if(current==tail)
		{
			Node<E>* nn= new Node<E>;
			nn->data=Data;
			tail->next=nn;
			tail=nn;
			tail->next=NULL;
			current=tail;
		}

		else
		{
			Node<E>* nn=new Node<E>;
			nn->data=Data;
			nn->next=current->next;
			current->next=nn;
		}

	}
   void displayList()
   {
       if(head==NULL && tail==NULL && current ==NULL)
       {
           cout<<"List is empty!"<<endl;
       }
       else
      {
          Node<E>*ptr;
      ptr = head;
      while(ptr!=NULL)
      {
          cout<<ptr->data<<" ";
          ptr = ptr->next;
      }
      cout<<endl;
      }
   }
   int CurrentLocation() const{
     int cu=0;
     Node<E> *ptr;
     ptr = head;
     while(ptr!=current)
     {
         cu++;
         ptr = ptr->next;
     }
     return cu;
   }
   const E& getData() const{
   return current->data;
   }
   void append(const E& data){
       Node<E>*ptr;
       ptr = head;
       while(ptr->next!=NULL)
       {
           ptr = ptr->next;
       }
       Node<E>*x = new Node<E>;
       ptr->next = x;
       x->data = data;
       x->next = NULL;
       current = x;
       tail = x;
   }
   void clearList(){

       	    head = tail = current = NULL;
   }
   E Remove(){
       if(head == NULL && tail==NULL && current==NULL)
       {
           cout<<"List is empty!"<<endl;
           return -1;
       }
       if(current==head)
       {
           E d;
           d = head->data;
           head->next = head;
           return d;
       }
    else
    {
        Node<E>*ptr;
    ptr = head;
    while(ptr->next!=current)
    {
        ptr = ptr->next;
    }
    E d;
    d = ptr->next->data;
    ptr->next =ptr->next->next;
    current = ptr;
     return d;
    }
   }
    void setListLocationToStart(){
       listLocation = 0;
       current = head;
    }
    void setListLocationToEnd(){
     int cu=0;
    current = head;
    while(current->next!=NULL)
    {
        cu++;
        current = current->next;
    }
    listLocation = cu;
    }
    int setToNewLocation(int location)
        {
            if(location>=NumberOfElements())
            {
                cout<<"Location Out of Bound! "<<endl;
                return listLocation;
            }
            else
        	{
        	    Node<E>* a=head;
		int c=0;

		while(c<location)
		{
			a=a->next;
			c++;
		}

			current=a;
			listLocation = c;
			return listLocation;
        }
        }
        void nextElement(){
            if(current->next==NULL)
            {
                cout<<"End of List! Cannot perform next element!"<<endl;
            }
            else
          {
              current = current->next;
          listLocation = listLocation+1;
        }
        }

               	void previousElement()
	{
		if(current==head)
		{
			cout<<"Already at start of the list! Cannot perform previous Element!"<<endl;
		}
		else
		{
			Node<E>* a=head;

			while(a->next!=current)
			{
				a=a->next;
			}
			current=a;
			listLocation = listLocation-1;
		}
	}
    void reverseLinkedList()
    {
        Node<E>* ptr;
        ptr = head;
        while(ptr->next !=NULL)
        {
            ptr=ptr->next;
        }
        Node<E>*temp;
        temp = ptr;
        Node<E>*x;
        while(ptr!=head)
        {
          x = head;
          while(x->next!=ptr)
          {
              x = x->next;
          }
          ptr->next = x;
          ptr = ptr->next;
        }
        head->next = NULL;
        head = temp;
    }
    void reverseLinkedListRecursively(Node<E>*tail)
    {
        if(tail==head)
        {
          head->next = NULL;
          return;
        }
        else
        {
            Node<E>*temp;
            temp = tail;
            Node<E>*x;
            while(x->next!=tail)
            x = x->next;
            reverseLinkedListRecursively(x);
            tail->next = x;
            tail = head;
        }  
    }
    Node<E>* getCurrentPointer()
    {
        return current;
    }
    /*void reverseSublist(int start,int end)
    {
       Node<E>* ptr1,*ptr2;
       ptr1 = head;
       int i=0;
       while(i!=start)
       {
           i++;
           ptr1 = ptr1->next;
       }
       i=0;
       ptr2 = head;
       while(i!=end)
       {
           i++;
           ptr2 = ptr2->next; 
       }
       Node<E>*ptr;
       ptr = ptr2;
       Node<E>*x,*temp;
       temp = ptr2;
       while(ptr!=ptr1)
       {
           x = ptr1;
          while(x->next!=ptr)
          {
              x = x->next;
          }
          ptr->next = x;
          ptr = ptr->next;
       }
       ptr1->next = NULL;
       ptr1 = temp;
    }*/

};
int main()
{
   LinkedList<int> l1;
   int x=1,a;
   while(x!=0)
   {
       cout<<"\n 1. Set to new location \n 2. Insert\n 3. Remove an element\n 4. Display the list\n 5. Append \n 6. No._of_elements \n 7. Current location \n  8. Return data of current location \n 9. Set List Location To Start\n 10. Set List location to End\n 11.  Previous element\n 12. Next element\n 13.Clear List\n14.Reverse\n15.Reverse recursively\n0. Exit\n ";
       cin>>x;
       switch(x)
		{
			case 1 : cout<<"Enter Location : ";
				 cin>>a;
				 l1.setToNewLocation(a);
				 break;
			case 2 :
                    cout<<"Enter Element : ";
				 	cin>>a;
				 	l1.insertElement(a);
				 break;

			case 3 :
			    cout<<"Element "<<l1.Remove()<< " was removed";
				 break;
			case 4 :
			         l1.displayList();
			         break;
			case 5 : cout<<"Enter value : ";
				 cin>>a;
				 l1.append(a);
				 break;
			case 6 :
			    cout<<"No. of elements : "<<l1.NumberOfElements()<<endl;
				 break;
			case 7 :
			     cout<<"Current Location : "<<l1.CurrentLocation()<<endl;
				 break;
		       /* case 9 : P=O;
				break;*/
			case 8:
			    cout<<"Data at Current location "<<l1.getData()<<endl;
				break;
			case 9:
				l1.setListLocationToStart();
				break;

			case 10:
				l1.setListLocationToEnd();
				break;

			case 11:
				l1.previousElement();
				break;

			case 12:
				l1.nextElement();
				break;
            case 13:
            l1.clearList();
            break;
            case 14:
            l1.reverseLinkedList();
            break;
            case 15:
            Node<int>* tail;
            l1.setListLocationToEnd();
            tail = l1.getCurrentPointer();
            l1.reverseLinkedListRecursively(tail);
            break;
			}
    }
}


