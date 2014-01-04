import ctypes
from ctypes import cdll
oldPath = "/Users/zhaosc/Downloads/weiboV3.apk"
newPath = "/Users/zhaosc/Downloads/weiboV4.apk"
patchPath = "/Users/zhaosc/Desktop/000.patch"
updatePath = "/Users/zhaosc/Desktop/weiboV5.apk"
soPath= "/Users/zhaosc/Documents/smart.so"
soPath2 = "smart.so";

smart = cdll.LoadLibrary(soPath)
print(smart)
print(smart.bsdiff)
print(smart.bspatch)

bsdiff = smart.bsdiff
ret = 0

print("bsdiff:", "start", "\n")
ret = bsdiff(oldPath, newPath, patchPath)
print("bsdiff:", ret, "\n")
ret = smart.bspatch(oldPath, updatePath, patchPath)
print("bspatch:", ret, "\n")
