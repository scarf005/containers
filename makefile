.PHONY: test

TARGET := test/build/test.out

$(TARGET):
	ninja -C test/build/

ninja: $(TARGET)

test: ninja
	$(TARGET)
