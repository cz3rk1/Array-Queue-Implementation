#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int N=10;

class queue
{
	private:
	    int T[N];
	    int first, size;

	public:
    	queue( );      
    	~queue( );     
    	bool empty ( );
    	int front ();
    	void enqueue ( int v );
    	void dequeue ( );
    	void print ( );
};

queue::queue( )
{
	first = 0;
	size = 0;
};

queue::~queue( )
{
};

bool queue::empty ( void )
{
  	return !size;
};

int queue::front()
{
	return T[first];
};

void queue::enqueue ( int v )
{
	int i=0;
	if(size<N)
	{
	    i = first + size;
		if(i>=N) i = i - N;
	    T[i] = v;
	    size++;
	}
};

void queue::dequeue ( )
{
	if(size>0)
	{
	    size--;
	    first++;
	}
	if(first=N)
	{
	    first = 0;
	}
};

void queue::print()

{
	int i, n;
	if (size) {
		for (int i = 0; i < size; i++){
			n = first + i;
			if (n >= N)
				n = n - N;
			cout << T[n] << " ";	
		}
		cout << endl;
	}
};

int main( )
{
  	queue Q;
  	int i, v;

  	srand ( time ( NULL ) );
  
  	for( i = 1; i <= 10; i++ )
  	{
       	v = rand( ) %  100;
     	Q.enqueue ( v );
  	}
  	
  	Q.print();
  	if (!Q.empty())
  		cout << "Front: " << Q.front() << endl;
  	
  	for( i = 1; i <= 10; i++ ) {
  		Q.dequeue();
  		Q.dequeue();
  		Q.print();  
  		if (!Q.empty())
  			cout << "Front: " << Q.front() << endl;
  		v = rand( ) %  100;
     	Q.enqueue ( v );
  		Q.print();  
		if (!Q.empty())   	
  			cout << "Front: " << Q.front() << endl;
	}
	
	Q.dequeue();
  	Q.print();
  	if (!Q.empty())
		cout << "Front: " << Q.front() << endl;	
		
	return 0;

};
