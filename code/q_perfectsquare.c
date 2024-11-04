#include <stdio.h>
#include <math.h>

/*
	QUIZ
	dikasih 2 integer sbagai input, a dan b
	task: cari angka yang ada di dalam range [a,b], yang mana digit2nya ketika dikali merupakan kuadrat sempurna
	jika angka itu memenuhi syarat, print ke console 
*/
int perfectsquare(int i){
	/*
		cara nentuin perfect square atau bukan (main algorithm):
		- kita sqrt
		- hasilnya ubah ke int
		- kita ubah balik ke double
		- kalau hasilnya sama dgn hasil yg dihitung sqrt, brarti dia kuadrat sempurna
		16 = 4.00 -> 4 -> 4.000
		2 = 1.414 -> 1 -> 1.000
	*/
	int digitmul = 1;
	while(i>0){
		int lastdigit = i%10;
		digitmul = digitmul * lastdigit;
		i /= 10;	
	}
	
	double root = sqrt(digitmul);
	int temp = (int)root;
	double root1 = (double)temp;
	
	return (root == root1);
}



int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++){
		if(perfectsquare(i)){
			printf("%d ",i);
		}
	}
}
