#include <iostream>
#include <stdlib.h>
#include <sys/time.h>
using namespace std;
typedef unsigned long long int uint64;
int max(int x, int y) {return (y > x)? y : x;}
int maxsum_n2(int *v,int *start, int *end,int n){
int maxsum=0;
int sum=0;
for (int i=0; i < n; ++i){
for (int j=i; j < n; ++j){
sum += v[j];
if (sum > maxsum){
*start = i;
*end = j;
maxsum = sum;
}
}
sum = 0;
}
return maxsum;
}
int maxsum_n(int *a, int size)
{
int max_so_far = a[0], i;
int curr_max = a[0];
for (i = 1; i < size; i++)
{
curr_max = max(a[i], curr_max+a[i]);
max_so_far = max(max_so_far, curr_max);
}
return max_so_far;
}
int randomizeVector(int *v,int n){
srand(10);
for (int i=0; i < n; ++i){
v[i] = rand() %20 - 13;	
}
}
int printVector(int *v,int n){
for (int i=0; i < n; ++i){
cout << v[i] << " ";	
}
}
int main(){
/* Declaração variáveis de intervalo vetor */
int start=0,end=0;
/* Declaração variáveis contagem tempo */
struct timeval t0, t1;
uint64 tempo;
/* Declaração Vetor com Semente 10 */
int v[60000];	
randomizeVector(v,60000);
for (int n=50; n < 10000; n += 50){
gettimeofday(&t0, NULL);
for (int p=0; p < 100; ++p){
//maxsum_n2(v,&start,&end,n);
//maxsum_n(v,n);
}
gettimeofday(&t1, NULL);
tempo = (t1.tv_sec - t0.tv_sec) * 1000000; //microsegundos
tempo += t1.tv_usec - t0.tv_usec;
std::cout << n << "," << tempo << endl;
}
}