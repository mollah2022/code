#include<bits/stdc++.h>
using namespace std;
bool gameOver;
const int width = 20;
const int height = 20;
int x,y, fruitX,fruitY, score;
enmu edirection { STOP = 0, LEFT, RIGHT, UP, DOWN};
edirection dir;
void Setup()
{
   gameOver = false;
   dir = STOP;
   x = width/2;
   y = height/2;
   fruitX = rand() % width;
   fruitY = rand() % height;
   score = 0;
}
 void Draw()
 {
 	system("cls");
 	for(int i=0 ;i < width; i++)
 	cout<<"#";
    cout<<endl;
    for(int i=0;i<height;i++)
    {
    	for(int j=0;j<width;j++)
    	{
    		if(j==0)
    			cout<<"#";
    			cout<<" ";
    		if(j==width-1)
    			cout<<"#";
    	}
    	cout<<endl;
    }

 }
 void Input()
 {

 }
 void Logic()
 {

 }
int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	Setup();
	while(!gameOver)
	{
		Draw();
		Input();
		Logic();
	}

}
