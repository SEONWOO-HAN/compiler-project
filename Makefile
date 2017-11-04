TARGET = minicpp
OBJECTS = lex.yy.c minicpp.tab.c minicpp.tab.h

$(TARGET) : $(OBJECTS)
	gcc -o $@ $^ AST.c -lfl

minicpp.tab.c minicpp.tab.h : minicpp.y
	bison -t -d $^

lex.yy.c : minicpp.l minicpp.tab.h
	flex -d $<

clean:
	rm $(OBJECTS) $(TARGET)
