# cldmenu - enhanced dynamic menu
# See LICENSE file for copyright and license details.

include config.mk

SRC = drw.c cldmenu.c stest.c util.c
OBJ = $(SRC:.c=.o)

all: options cldmenu stest

options:
	@echo cldmenu build options:
	@echo "CFLAGS   = $(CFLAGS)"
	@echo "LDFLAGS  = $(LDFLAGS)"
	@echo "CC       = $(CC)"

.c.o:
	$(CC) -c $(CFLAGS) $<

config.h:
	cp config.def.h $@

$(OBJ): arg.h config.h config.mk drw.h

cldmenu: cldmenu.o drw.o util.o
	$(CC) -o $@ cldmenu.o drw.o util.o $(LDFLAGS)

stest: stest.o
	$(CC) -o $@ stest.o $(LDFLAGS)

clean:
	rm -f cldmenu stest $(OBJ) cldmenu-$(VERSION).tar.gz

dist: clean
	mkdir -p cldmenu-$(VERSION)
	cp LICENSE Makefile README arg.h config.def.h config.mk cldmenu.1\
		drw.h util.h cldmenu_path cldmenu_run stest.1 $(SRC)\
		cldmenu-$(VERSION)
	tar -cf cldmenu-$(VERSION).tar cldmenu-$(VERSION)
	gzip cldmenu-$(VERSION).tar
	rm -rf cldmenu-$(VERSION)

install: all
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	cp -f cldmenu cldmenu_path cldmenu_run stest $(DESTDIR)$(PREFIX)/bin
	chmod 755 $(DESTDIR)$(PREFIX)/bin/cldmenu
	chmod 755 $(DESTDIR)$(PREFIX)/bin/cldmenu_path
	chmod 755 $(DESTDIR)$(PREFIX)/bin/cldmenu_run
	chmod 755 $(DESTDIR)$(PREFIX)/bin/stest
	mkdir -p $(DESTDIR)$(MANPREFIX)/man1
	sed "s/VERSION/$(VERSION)/g" < cldmenu.1 > $(DESTDIR)$(MANPREFIX)/man1/cldmenu.1
	sed "s/VERSION/$(VERSION)/g" < stest.1 > $(DESTDIR)$(MANPREFIX)/man1/stest.1
	chmod 644 $(DESTDIR)$(MANPREFIX)/man1/cldmenu.1
	chmod 644 $(DESTDIR)$(MANPREFIX)/man1/stest.1

uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/cldmenu\
		$(DESTDIR)$(PREFIX)/bin/cldmenu_path\
		$(DESTDIR)$(PREFIX)/bin/cldmenu_run\
		$(DESTDIR)$(PREFIX)/bin/stest\
		$(DESTDIR)$(MANPREFIX)/man1/cldmenu.1\
		$(DESTDIR)$(MANPREFIX)/man1/stest.1

.PHONY: all options clean dist install uninstall
