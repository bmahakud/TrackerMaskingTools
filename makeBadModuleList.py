import sys
import os
deletePrevious="rm -rf BadModuleList*.py"
os.system(deletePrevious)


fileName=sys.argv[1]

with open(fileName) as f1:
    dets = f1.readlines()
dets = [x.strip() for x in dets]

totaldetIDs=len(dets)


FileNum=0
for a in range(0,len(dets)):
   rem=a%250
   fileStart=False
   if rem==0:
     SubfileName="BadModuleList%s.py"%(str(FileNum))
     sys.stdout = open(SubfileName,'w') 
     print "import FWCore.ParameterSet.Config as cms"
     print "BadModules%s = cms.untracked.VPSet("%(str(FileNum))
     FileNum=FileNum+1
   print "cms.PSet("
   print "errortype = cms.string('whole'),"
   print "detid = cms.uint32(%s)"%(str(dets[a]))
   print "),"
   if a<(len(dets)-1) and rem == 249:
     print ")" 

print ")"


sys.stdout = open("AllBadModules.py",'w')

print "import FWCore.ParameterSet.Config as cms"
FileNumber=0
for a in range(0,len(dets)):
    remain=a%250
    if remain==0:
      SubfileName="BadModuleList%s"%(str(FileNumber))
      print "from %s import *"%(SubfileName)
      FileNumber=FileNumber+1

FileNumber1=0
print "BadModuleList = ",
for a in range(0,len(dets)):
    remain=a%250
    if remain==0:
      SubfileName="BadModuleList%s"%(str(FileNumber1))
      print "BadModules%s"%(str(FileNumber1)),
      FileNumber1=FileNumber1+1
      if FileNumber1 !=FileNumber: 
          print " +",











