from PIL import Image, Imagefilter

before = Image.open("yard.bmp")
after = before.filter(ImageFilter.BoxBlur(10))
after.save("outte.bmp")