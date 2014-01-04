#简单介绍
这个项目是xcode的项目，在SmartUpdate下也存在makefile用于在Linux下使用  

##如何使用
需要注意的是smart_diff和smart_patch；  
smart_diff:使用旧包和新包生成差异包；  
smart_patch:使用旧包和差异包生成新包；

smart_diff:这部分工作在服务端或者单独进行，主要就是准备好差异包提供给用户更新下载；  
smart_patch:可以用android-ndk打成so文件，在android客户端smart_patch利用旧包和差异包生成新包。具体的android-ndk工作就相对容易啦。