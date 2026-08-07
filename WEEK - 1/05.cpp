#include <stdio.h>
#include <ctype.h>

int main(){
	char ch, lower_ch;
	printf("Enter any alphabet: ");
	if (scanf("%c", &ch)!=1){
		printf("Error reading input.");
	    return 1;
    }
	
	if (!isalpha(ch)){
		printf("Error: not an alphabetical character.");
	}
	
	lower_ch = tolower(ch);
	if (lower_ch=='a'||lower_ch=='e'||lower_ch=='i'||lower_ch=='o'||lower_ch=='u'){
		printf("'%c' is a vowel.", ch);
	} else {
		printf("'%c' is a consonant.", ch);
	}
	
	return 0;
}
