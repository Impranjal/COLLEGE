#include <bits/stdc++.h>
using namespace std;
class neuron
{public:
float w1,w2,bias;
float target,yin,y;
int alpha;
neuron()
{
 w1=w2=2;
 bias=1;
}
float input(float x1,float x2)
{ cout<<"Enter the input vectors"<<endl;
 cin>>x1>>x2;
 y=w1*x1+w2*x2+bias;
cout<<y<<endl;
}
float activation()
{ yin=1/(1+exp(-y));
}
float correction()
{ float t;
 if(t!=yin)
{w1=w1+alpha(t-yin);
w2=w2+alpha(t-yin);
bias=bias+alpha(t-yin);
cout<<"New weight and bias after training are";
cout<<w1<<w2<<bias;
}};
int main()
(neuron n;
n.alpha=1;
n.input();
n.activation();
n.correction();
return 0;
}


