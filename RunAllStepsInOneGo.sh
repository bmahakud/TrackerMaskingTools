python makeBadModuleList.py BadModulePixel.txt
python SiPixelBadModuleByHandBuilder_cfg.py
cmsRun Step3.py
cmsRun Step4.py
root -l -q Plotter.C
