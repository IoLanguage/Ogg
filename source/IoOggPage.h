//metadoc copyright Chris Double 2009

#ifndef IOOggPage_DEFINED
#define IOOggPage_DEFINED 1

#include "IoObject.h"
#include "IoSeq.h"
#include <ogg/ogg.h>

#define ISOGGPAGE(self) IoObject_hasCloneFunc_(self, (IoTagCloneFunc *)IoOggPage_rawClone)

typedef IoObject IoOggPage;

IoObject *IoMessage_locals_oggPageArgAt_(IoMessage *self, IoObject *locals, int n);

IoTag *IoOggPage_newTag(void *state);
IoOggPage *IoOggPage_proto(void *state);
IoOggPage *IoOggPage_rawClone(IoOggPage *self);
void IoOggPage_free(IoOggPage *self);

IoObject *IoOggPage_version(IoOggPage *self, IoObject *locals, IoMessage *m);
IoObject *IoOggPage_continued(IoOggPage *self, IoObject *locals, IoMessage *m);
IoObject *IoOggPage_packets(IoOggPage *self, IoObject *locals, IoMessage *m);
IoObject *IoOggPage_bos(IoOggPage *self, IoObject *locals, IoMessage *m);
IoObject *IoOggPage_eos(IoOggPage *self, IoObject *locals, IoMessage *m);
IoObject *IoOggPage_granulepos(IoOggPage *self, IoObject *locals, IoMessage *m);
IoObject *IoOggPage_serialno(IoOggPage *self, IoObject *locals, IoMessage *m);
IoObject *IoOggPage_pageno(IoOggPage *self, IoObject *locals, IoMessage *m);
IoObject *IoOggPage_setChecksum(IoOggPage *self, IoObject *locals, IoMessage *m);

#endif
