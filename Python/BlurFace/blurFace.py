import cv2

face_cascade = cv2.CascadeClassifier('haarcascade_frontalface_default.xml')

#Photo by Luke Braswell on Unsplash
img = cv2.imread('image.jpg')
img = cv2.resize(img,(240,427))
gray = cv2.cvtColor(img , cv2.COLOR_BGR2GRAY)

faces = face_cascade.detectMultiScale(gray)
x,y,w,h = faces[0][0] , faces[0][1] , faces[0][2] , faces[0][3]


img[y:y+h,x:x+w,:] = cv2.blur(img[y:y+h , x:x+w , :], (20,20))


cv2.namedWindow('img',cv2.WINDOW_NORMAL)
cv2.resizeWindow('img', 300,300)
cv2.imshow('img' ,img)
cv2.waitKey()
cv2.destroyAllWindows()