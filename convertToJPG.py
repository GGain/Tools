import os
import re
from PIL import Image

if __name__ == '__main__':
    Directory='C:/Users/Admin/Desktop/giang'
    files = os.listdir(Directory)
    print(files)
    imgFilter = "bmp"
    for f in files:
        if re.search(imgFilter, f) is not None:
            #print(imageFiles.group(0))
            imageFiles=f.rsplit('.', 1)[0]
            imgload = Image.open(os.path.join(Directory,f))
            imgload.save(os.path.join(Directory,imageFiles+".jpg"));