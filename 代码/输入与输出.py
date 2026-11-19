#输出 %占位符 .format
name='小米'
classpro='一班'
age=6
print ('我是%s：来自【%s】,我%d岁'%(name,classpro,age))
print ('我是%s：\n来自【%s】,\n我%d岁'%(name,classpro,age))
print ('我是{}来自{},我{}岁'.format(name,classpro,age))
#输入 input
N=input("输入你的名字：")
A=float (input("你的年龄是："))
print ("你的名字是：{}你的年龄是：{}".format(N,A))
print (type(N),type(A))