

CFLAGS =$(shell pkg-config --cflags gtkmm-3.0)
LDFLAGS=$(shell pkg-config --libs gtkmm-3.0)

model : model.cpp model_class.cpp model_class.hpp
	g++ -o model model.cpp $(CFLAGS) $(LDFLAGS)

clean :
	rm -f model

run :
	make
	./model

