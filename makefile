a.exe:dequeue_app.o dequeue_imp.o
	c++ dequeue_app.o dequeue_imp.o -o a.exe
dequeue_app.o:dequeue_app.cpp
	c++ -c dequeue_app.cpp
dequeue_imp.o:dequeue_imp.cpp
	c++ -c dequeue_imp.cpp