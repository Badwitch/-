#include<queue> 
class elevator
{
	private:
		queue<int>DestinationQueue
		int currentfloor;
		int indicator;
	public:
		elevator();
		void gotofloor();
		void stop();
		void updateDestinationQueue();
 }
 elevator::elevator()
 {
 	currentfloor=0;
 	indicator=0;
 }
 void elevator::gotofloor()
 {
 	indicator=DestinationQueue.serve();
 }
 void elevator::stop()
 {
 	indicator=currentfloor;
 }
 void elevator::updateDestinationQueue()
 {
 	
 }
