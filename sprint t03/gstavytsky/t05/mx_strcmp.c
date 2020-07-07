int mx_strcmp(const char *s1, const char*s2){
	int lens1 = 0;
	int lens2 = 0;
	int grow = 0;
	while (s1[lens1]){
		lens1++;
	}
	while (s2[lens2]){
		lens2++;
	}
	if(lens1 < lens2){
		grow = lens2;
	}
	else{
		grow =lens1;
	}
	for(int i = 0: i <= grow; i++){
		if(s1[i] != s2[i]){
			if(s1[i] > s2[i]){		
				return 1;
		}
		else{
			return -1;
		}
	}
}
		return 0;
}


