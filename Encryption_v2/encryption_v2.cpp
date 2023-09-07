#include <iostream>
#include <chrono>
#include <thread>
#include <unistd.h>
#include <ctime>
#include <cstdlib>

using namespace std;

int main ()
{

	// Variables
	char a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
	int exit;
	int choice;
	int r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11,r12,r13,r14,r15,r16,r17,r18,r19,r20,r21,r22,r23,r24,r25,r26;

	// RANDOM NUMBER GENERATORS
	srand(time(0));
	r1 = rand() % (63) + 1 ;
	srand(time(0));
	r2 = rand() % (63) + 1 ;
	srand(time(0));
	r3 = rand() % (62) + 1 ;
	srand(time(0));
	r4 = rand() % (61) + 1 ;
	srand(time(0));
	r5 = rand() % (60) + 1 ;
	srand(time(0));
	r6 = rand() % (59) + 1 ;
	srand(time(0));
	r7 = rand() % (58) + 1 ;
	srand(time(0));
	r8 = rand() % (57) + 1 ;
	srand(time(0));
	r9 = rand() % (56) + 1 ;
	srand(time(0));
	r10 = rand() % (55) + 1 ;
	srand(time(0));
	r11 = rand() % (54) + 1 ;
	srand(time(0));
	r12 = rand() % (53) + 1 ;
	srand(time(0));
	r13 = rand() % (52) + 1 ;
	srand(time(0));
	r14 = rand() % (51) + 1 ;
	srand(time(0));
	r15 = rand() % (50) + 1 ;
	srand(time(0));
	r16 = rand() % (49) + 1 ;
	srand(time(0));
	r17 = rand() % (48) + 1 ;
	srand(time(0));
	r18 = rand() % (47) + 1 ;
	srand(time(0));
	r19 = rand() % (46) + 1 ;
	srand(time(0));
	r20 = rand() % (44) + 1 ;
	srand(time(0));
	r21 = rand() % (43) + 1 ;
	srand(time(0));
	r22 = rand() % (42) + 1 ;
	srand(time(0));
	r23 = rand() % (41) + 1 ;
	srand(time(0));
	r24 = rand() % (40) + 1 ;
	srand(time(0));
	r25 = rand() % (39) + 1 ;
	srand(time(0));
	r26 = rand() % (38) + 1 ;


	//MENU
	cout <<  "\n---------------------------------------" << endl;
	cout << "\nDo You Want To Encrypt Or Decrypt ? Press \n1 For Encryption  \n2 for Decryption" << endl;
	cin >> choice;
	cout <<  "\n---------------------------------------" << endl;
	

	// CHOICE == ENCRYPTION

	if ((choice < 1 ) || (choice > 2))
	{
		cout << "\nInvalid choice !!";
		cout << endl << "\n---------------------------------------" << endl;
		return 0;

	}
	else if (choice == 1)
	{
		cout <<  "\nEnter Your Sentence : " << endl << endl;
		cout << "\n==> ";


		//INPUT SENTENCE FOR ENCRYPTION
		cin.get(a);
		cin.get(b);
		cin.get(c);
		cin.get(d);
		cin.get(e);
		cin.get(f);
		cin.get(g);
		cin.get(h);
		cin.get(i);
		cin.get(j);
		cin.get(k);
		cin.get(l);
		cin.get(m);
		cin.get(n);
		cin.get(o);
		cin.get(p);
		cin.get(q);
		cin.get(r);
		cin.get(s);
		cin.get(t);
		cin.get(u);
		cin.get(v);
		cin.get(w);
		cin.get(x);
		cin.get(y);
		cin.get(z);
		
		// ENCRYPTING ANIMATION

		cout << endl << "\n---------------------------------------" << endl;
		cout << "\nEncrypting";
		cout << "\n.";usleep(500000);	
		cout << "\n.";usleep(500000);
		cout << "\n.";usleep(500000);
		cout << endl;
		


		// FORMULAE FOR ENCRYPTION
		a -= r1 ;
		b -= r2 ;
		c -= r3 ;
		d -= r4 ;
		e -= r5 ;
		f -= r6 ;
		g -= r7 ;
		h -= r8 ;
		i -= r9 ; 
		j -= r10 ;
		k -= r11 ;
		l -= r12 ;
		m -= r13 ;
		n -= r14 ;
		o -= r15 ;
		p -= r16 ; 
		q -= r17 ;
		r -= r18 ;
		s -= r19 ;
		t -= r20 ;
		u -= r21 ;
		v -= r22 ;
		w -= r23 ;
		x -= r24 ;  
		y -= r25 ; 
		z -= r26 ;


		//ASCII VALIDATION
		if(a < 33 )
		{
			a += 33;
			r1 += 33;
		}
		if(b < 33 )
		{
			b += 33;
			r2 += 33;
		}
		if(c < 33 )
		{
			c += 33;
			r3 += 33;
		}
		if(d < 33 )
		{
			d += 33;
			r4 += 33;
		}
		if(e < 33 )
		{
			e += 33;
			r5 += 33;
		}
		if(f < 33 )
		{
			f += 33;
			r6 += 33;
		}
		if(g < 33 )
		{
			g += 33;
			r7 += 33;
		}
		if(h < 33 )
		{
			h += 33;
			r8 += 33;
		}
		if(i < 33 )
		{
			i += 33;
			r9 += 33;
		}
		if(j < 33 )
		{
			j += 33;
			r10 += 33;
		}
		if(k < 33 )
		{
			k += 33;
			r11 += 33;
		}
		if(l < 33 )
		{
			l += 33;
			r12 += 33;
		}
		if(m < 33 )
		{
			m += 33;
			r13 += 33;
		}
		if(n < 33 )
		{
			n += 33;
			r14 += 33;
		}
		if(o < 33 )
		{
			o += 33;
			r15 += 33;
		}
		if(p < 33 )
		{
			p += 33;
			r16 += 33;
		}
		if(q < 33 )
		{
			q += 33;
			r17 += 33;
		}
		if(r < 33 )
		{
			r += 33;
			r18 += 33;
		}
		if(s < 33 )
		{
			s += 33;
			r19 += 33;
		}
		if(t < 33 )
		{
			t += 33;
			r20 += 33;
		}
		if(u < 33 )
		{
			u += 33;
			r21 += 33;
		}
		if(v < 33)
		{
			v += 33;
			r22 += 33;
		}
		if(w < 33 )
		{
			w += 33;
			r23 += 33;
		}
		if(x < 33 )
		{
			x += 33;
			r24 += 33;
		}
		if(y < 33 )
		{
			y += 33;
			r25 += 33;
		}
		if(z < 33 )
		{
			z += 33;
			r26 += 33;
		}
		
		
		// OUTPUT OF GENERATED ENCRYPTION
		cout <<  "\n---------------------------------------" << endl ;usleep(800000);
		cout <<  "\nYour Encryption Is : " << endl << endl ;
		cout << "==> " << a << b << c << d << e << f << g << h << i << j << k << l << m << n << o << p << q << r << s << t << u << v << w << x << y << z <<" <=="<<endl <<endl;

		cout << endl << "\n---------------------------------------" << endl;
	
		//HIDING KEYS
		r1 = r1*1;
		r2 = r2*2;
		r3 = r3*3;
		r4 = r4*4;
		r5 = r5*5;
		r6 = r6*6;
		r7 = r7*7;
		r8 = r8*8;
		r9 = r9*9;
		r10 = r10*10;
		r11 = r11*11;
		r12 = r12*12;
		r13 = r13*13;
		r14 = r14*14;
		r15 = r15*15;
		r16 = r16*16;
		r17 = r17*17;
		r18 = r18*18;
		r19 = r19*19;
		r20 = r20*20;
		r21 = r21*21;
		r22 = r22*22;
		r23 = r23*23;
		r24 = r24*24;
		r25 = r25*25;
		r26 = r26*26;
		
		
		//DISPLAYING THE HIDDEN KEYS
		cout << "\nYour Keys Are : " << endl ;
		cout << "\n" << r1;
		cout << "\t" << r2;
		cout << "\t" << r3;
		cout << "\t" << r4;
		cout << "\t" << r5;
		cout << "\n" << r6;
		cout << "\t" << r7;
		cout << "\t" << r8;
		cout << "\t" << r9;
		cout << "\t" << r10;
		cout << "\n" << r11;
		cout << "\t" << r12;
		cout << "\t" << r13;
		cout << "\t" << r14;
		cout << "\t" << r15;
		cout << "\n" << r16;
		cout << "\t" << r17;
		cout << "\t" << r18;
		cout << "\t" << r19;
		cout << "\t" << r20;
		cout << "\n" << r21;
		cout << "\t" << r22;
		cout << "\t" << r23;
		cout << "\t" << r24;
		cout << "\t" << r25;
		cout << "\t" << r26;
		cout << endl << "\n---------------------------------------" << endl << endl << endl;
	}

	// CHOICE == DECRYPTION
	else if (choice == 2)
	{
		

		//ENCRYPTED CODE INPUT
		cout << "\nEnter Your Encrypted Code : " <<endl;
		cin.get(a);
		cin.get(b);
		cin.get(c);
		cin.get(d);
		cin.get(e);
		cin.get(f);
		cin.get(g);
		cin.get(h);
		cin.get(i);
		cin.get(j);
		cin.get(k);
		cin.get(l);
		cin.get(m);
		cin.get(n);
		cin.get(o);
		cin.get(p);
		cin.get(q);
		cin.get(r);
		cin.get(s);
		cin.get(t);
		cin.get(u);
		cin.get(v);
		cin.get(w);
		cin.get(x);
		cin.get(y);
		cin.get(z);

		cout << endl << "\n---------------------------------------" << endl;

		//INPUTING ENCRYPTION KEYS
		cout << "\nEnter Your Keys, Press Enter After Each Key." << endl;
		cin >> r1 >> r2 >> r3 >> r4 >> r5 >> r6 >> r7 >> r8 >> r9 >> r10 >> r11 >> r12 >> r13 >> r14 >> r15 >> r16 >> r17 >> r18 >> r19 >> r20 >> r21 >> r22 >> r23 >> r24 >> r25 >> r26 ;
		
		cout << endl << "\n---------------------------------------" << endl;
		
		//EVALUATING KEYS
		r1 = r1/1;
		r2 = r2/2;
		r3 = r3/3;
		r4 = r4/4;
		r5 = r5/5;
		r6 = r6/6;
		r7 = r7/7;
		r8 = r8/8;
		r9 = r9/9;
		r10 = r10/10;
		r11 = r11/11;
		r12 = r12/12;
		r13 = r13/13;
		r14 = r14/14;
		r15 = r15/15;
		r16 = r16/16;
		r17 = r17/17;
		r18 = r18/18;
		r19 = r19/19;
		r20 = r20/20;
		r21 = r21/21;
		r22 = r22/22;
		r23 = r23/23;
		r24 = r24/24;
		r25 = r25/25;
		r26 = r26/26;
		
		
		
		// CONVERTING CODE INTO ORIGINAL SENTENCE	
		a += r1  ;
		b += r2  ;
		c += r3  ;
		d += r4  ;
		e += r5  ;
		f += r6  ;
		g += r7  ;
		h += r8  ;
		i += r9  ; 
		j += r10 ;
		k += r11 ;
		l += r12 ;
		m += r13 ;
		n += r14 ;
		o += r15 ;
		p += r16 ; 
		q += r17 ;
		r += r18 ;
		s += r19 ;
		t += r20 ;
		u += r21 ;
		v += r22 ;
		w += r23 ;
		x += r24 ;  
		y += r25 ; 
		z += r26 ;

		//OUTPUT OF DECRYPTION
		cout <<  "\nYour Decryption Is : " << endl << endl ;
		cout << "\n  " << b << c << d << e << f << g << h << i << j << k << l << m << n << o << p << q << r << s << t << u << v << w << x << y << z <<endl <<endl;
		cout << endl << "\n---------------------------------------" << endl;



	}

	//CHOICE VALIDATION
	/*else if ((choice < 1) || (choice > 2))
	{
		cout << "\nINVALID CHOICE." <<endl <<endl;
		cout << endl << "\n---------------------------------------" << endl;
		return 0;

	}*/







 	return 0;

}
