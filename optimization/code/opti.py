import numpy as np
import matplotlib.pyplot as plt
#if using termux
import subprocess
import shlex
#end if
a=5
b=2
#defining function
def f(x):
	return(((a)**2)+((b)**2)-2*((a)*(b))*(np.cos(x-(a*x)/b)));
	
#defining derivative of f(x)
df=lambda x:(-2*(a)*(b)*(np.sin(x-((a*x)/b)))*(1-(a/b)));

#for maxima using gradient ascent
cur_x1=0.5
previous_step_size1=1
iters1=0
precision=0.000000001
alpha=0.0001
max_iters=100000000

while (previous_step_size1>precision)&(iters1<max_iters):
	prev_x=cur_x1
	cur_x1+=alpha*df(prev_x)
	previous_step_size1=abs(cur_x1-prev_x)
	iters1+=1
max_val=f(cur_x1)
k=np.sqrt(max_val)
print('maximum value  of x is',max_val)
#Plotting f(x)
x=np.linspace(-10,10,100)
y=f(x)
label_str = "$(a^2+b^2-2abcos(x-ax/b))$"
plt.plot(x,y,label=label_str)
#Labelling points
plt.plot(cur_x1,max_val,'.',label='point of maxima'  )
print("maximum distance is",k)


plt.xlabel("x-axis")
plt.ylabel("y-axis")
plt.grid()
plt.legend()
#plt.savefig('op1.png')
#if using termux
plt.savefig('/sdcard/Download/codes/opti/fig1.pdf')
subprocess.run(shlex.split("termux-open /sdcard/Download/codes/opti/fig1.pdf"))
#plt.show()
