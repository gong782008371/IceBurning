BINARY := ../LogicServer
SRCDIR := ..

.PHONY: all clean
all: clean_binart $(BINARY)

# Analyze project
CPP_FILES := $(shell find $(SRCDIR) -name "*.cpp")
OBJ_FILES := $(subst /,-,$(subst $(SRCDIR)/,,$(CPP_FILES:%.cpp=%.o)))
DEP_FILES := $(subst /,-,$(subst $(SRCDIR)/,,$(CPP_FILES:%.cpp=%.d)))

CPPFLAGS= -g -I.. \
			-I../../Common \
			-I../../../Common/protobuf-2.5.0/src

LDFLAGS = ../../Lib/libCommon.a \
			../../Lib/libProto_out.a \
			../../../Common/protobuf-2.5.0/src/.libs/libprotobuf.a 

# Generate dependence, including rules to generate object files
%.d:
	@echo Generate $@ ...
	@g++ -MM $(CPPFLAGS) $(SRCDIR)/$(subst -,/,$*).cpp > $@.$$$$; \
	sed 's,.*:,$*.o:,g' < $@.$$$$ >$@; \
	echo '	g++ -c $(CPPFLAGS) $(SRCDIR)/$(subst -,/,$*).cpp -o $*.o' >>$@; \
	echo '$@: $(SRCDIR)/$(subst -,/,$*).cpp' >> $@; \
	rm -f $@.$$$$;

# Include dependence
ifneq ($(MAKECMDGOALS),clean) 
-include $(DEP_FILES) 
endif

ifneq ($(BINARY),)
$(BINARY): $(OBJ_FILES)
	g++ $(CPPFLAGS) $^ $(LDFLAGS) -o $@   
	@echo                                                                   
	@echo --- finished ---
	@echo 
endif

# Clean project
clean_binart:
	-rm -rf $(BINARY)
clean:
	-rm -rf $(BINARY) $(OBJ_FILES) $(DEP_FILES) *.d.* *.d *.o

