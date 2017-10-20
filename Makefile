TARGET = minicpp
OBJECTS = lex.yy.c minicpp.tab.c minicpp.tap.h

$(TARGET) : $(OBJECTS)
	gcc -o $@ $^ -lfl

minicpp.tap.c minicpp.tap.h : minicpp.y
	bison -d $^

lex.yy.c : minicpp.l minicpp.tab.h
	flex $<

clean:
	rm $(OBJECTS) $(TARGET)
