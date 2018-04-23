.PHONY:clean
main:seqqueue.c
	gcc $^ -o $@
clean:
	rm -f main
