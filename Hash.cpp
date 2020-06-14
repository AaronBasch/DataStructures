#include "Hash.h"
#include <string>
#include <iostream>
using namespace std;


Hash::Hash(int arraySize)
{
  size = arraySize;
}

void Hash::add(string key, string value)
{
  int k = Element::hashCode(key);
  Element* head = hashArray[k];
  Element::insert(head, key, value);
}

string Hash::getValue(string key)
{
  int k = Element::hashCode(key);
  Element* head = hashArray[k];
  return Element::findValue(head, key);
}

void Hash::remove(string key)
{
  int k = Element::hashCode(key);
  Element* head = hashArray[k];
  Element::removeElement(head, key);
}

Hash::Element::Element(){
  next = NULL;
}

string Hash::Element::findValue(Element* head, string key){
  while(head->key!=key) head = head->next;
  return head->value;
}

void Hash::Element::insert(Element* head, string key, string value){
  Element* temp = new Element();
  temp->key = key;
  temp->value = value;
  while(head != NULL){
    head = head->next;
  }
  head = temp;
}

void Hash::Element::removeElement(Element* head, string key)
{
  Element* temp;
  while(head->key!=key){
    temp = head;
    head = head->next;
  }
  temp->next = head->next;
  delete head;
}

int Hash::Element::hashCode(string key)
{

}
