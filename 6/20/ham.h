int tong(int n){
int c=n,s=0;
for(int i=0;i<n;i++){
int dv=c%10;
s=s+dv;
c=c/10;
}
return s;
}

int uoc(int a, int b){
	int u=0;
	for(int i=1;i<=a;i++)
	if(a%i==0&&b%i==0)u=i;
	return u;
}
int boi(int c,int d){
	int boi=0;
	for(int i=c;i<=c*d;i++){
		if(i%c==0&&i%d==0){
		boi=i;
		break;
	}
	}return boi;
}

int xy(int x,int y){
	int s=1;
	for(int i=0;i<y;i++)s=s*x;
	return s;
}
