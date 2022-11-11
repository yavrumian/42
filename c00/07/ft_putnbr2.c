#include <unistd.h>
#include <limits.h>
#include <stdio.h>
int ft_abs(int i) {
	if(i < 0){
		return -i;
	}else {
		return i;
	}
}
/*int reverser(int num, int reverse){
	if(num == 0){
		return reverse;
	}
	int last_digit = num%10;
	num /= 10;
	reverse = reverse * 10 + last_digit;
	return reverser(num, reverse);
}*/
int ft_pow(int base, int exp){
	int res = 1;
	while(exp > 0){
		res *= base;
		exp--;
	}
}
int ft_size(int num, int size ){
	if (num == 0){
		return size;
	}
	num /= 10;
	size++;
	return ft_size(num, size);
}
void ft_putnbr(int nb){
	//int rev_nb = abs(reverser(nb, 0));
	char c;
	int orig_nb = nb;
	char zero = '0';
	char min = '-';
	int div = ft_pow(10, ft_size(nb, 0) - 1);
	/*if(nb == 0){
		write (1, &zero, 1);
	}*/
	if(nb < 0){
		write(1, &min, 1);
	}
	while(nb != 0){
		if(ft_size(nb % div, 0) - ft_size(nb, 0) == 1){
			c = ft_abs(nb / div) + '0';
			nb %= div;
			div /= 10;
		}else{
			c = ft_abs(nb % div);
			nb /= div;
			div /= 10;
		}
		write(1, &c, 1);
	}
	if(orig_nb % 10 == 0){
		write(1, &zero, 1);
	}
	/*if(num_size(nb, 0) != num_size(rev_nb, 0)){
		write(1, &zero, 1);
	}*/
}

int main(){
	ft_putnbr(100);
	return 0;
}
