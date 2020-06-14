#ifndef HASH_H
#define HASH_H

class Hash{
  private:
    int size;
    Element* hashArray[size];
  public:
    Hash(int arraySize);
    void add(string key, string value);
    string value(string key);
    void remove(string key);

    class Element{
      private:
        int key;
        string value;
        HashElement *next;
      public:
        Element();
        int hashCode(string key);
    };
};

#endif
