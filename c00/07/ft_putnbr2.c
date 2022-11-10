#include <unistd.h>
#include <limits.h>
#include <stdio.h>
int abs(int i) {
	if(i < 0){
		return -i;
	}else {
		return i;
	}
}
int reverser(int num, int reverse){
	if(num == 0){
		return reverse;
	}
	int last_digit = num%10;
	num /= 10;
	reverse = reverse * 10 + last_digit;
	return reverser(num, reverse);
}
int num_size(int num, int size ){
	if (num == 0){
		return size;
	}
	num /= 10;
	size++;
	return num_size(num, size);
}
void ft_putnbr(int nb){
	int rev_nb = abs(reverser(nb, 0));
	char c;
	char zero = '0';
	char min = '-';
	if(nb < 0){
		write(1, &min, 1);
	}
	while(rev_nb != 0){
		c = rev_nb % 10 + '0';
		rev_nb /= 10;
		write(1, &c, 1);
	}
	if(num_size(nb, 0) != num_size(rev_nb, 0)){
		write(1, &zero, 1);
	}
}

int main(){
	ft_putnbr(2147483647);
	return 0;
}
