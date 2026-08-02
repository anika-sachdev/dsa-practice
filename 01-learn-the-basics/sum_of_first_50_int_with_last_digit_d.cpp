 #include <iostream>
 using namespace std;
 int whileLoop(int d) {
        int numberoftimes=0;
        int sum=0;
        int i=1;
        while(numberoftimes<50)
        {
            if(i%10==d)
            {
                sum=sum+i;
                numberoftimes+=1;
            }
            i++;
        }
        return sum;
    }
int main()
{
    cout<<whileLoop(3);
}