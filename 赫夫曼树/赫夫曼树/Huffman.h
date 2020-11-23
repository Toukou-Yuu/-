#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Compare {
public:
	bool operator()(Huffman_Node node1,Huffman_Node node2) {
		return node1.m_weight < node2.m_weight;
	}
};

class Huffman_Node {
public:
    //ШЈжи
	char m_parent; 
	char m_data;
	double m_weight;
	char m_left_child;
	char m_right_child;
public:
	Huffman_Node(char, char, double, char, char) {};
	void Init_HT();
	void Creat_HT();
	vector<Huffman_Node>Node;
};

void Huffman_Node::Init_HT() {
	Huffman_Node Node_A(0, 'A', 0, 0, 0); Node.push_back(Node_A);
	Huffman_Node Node_B(0, 'B', 0, 0, 0); Node.push_back(Node_B);
	Huffman_Node Node_C(0, 'C', 0, 0, 0); Node.push_back(Node_C);
	Huffman_Node Node_D(0, 'D', 0, 0, 0); Node.push_back(Node_D);
	Huffman_Node Node_E(0, 'E', 0, 0, 0); Node.push_back(Node_E);
	Huffman_Node Node_F(0, 'F', 0, 0, 0); Node.push_back(Node_F);
	Huffman_Node Node_G(0, 'G', 0, 0, 0); Node.push_back(Node_G);
	Huffman_Node Node_H(0, 'H', 0, 0, 0); Node.push_back(Node_H);
	Huffman_Node Node_I(0, 'I', 0, 0, 0); Node.push_back(Node_I);
	Huffman_Node Node_J(0, 'J', 0, 0, 0); Node.push_back(Node_J);
	Huffman_Node Node_K(0, 'K', 0, 0, 0); Node.push_back(Node_K);
	Huffman_Node Node_L(0, 'L', 0, 0, 0); Node.push_back(Node_L);
	Huffman_Node Node_M(0, 'M', 0, 0, 0); Node.push_back(Node_M);
	Huffman_Node Node_N(0, 'N', 0, 0, 0); Node.push_back(Node_N);
	Huffman_Node Node_O(0, 'O', 0, 0, 0); Node.push_back(Node_O);
	Huffman_Node Node_P(0, 'P', 0, 0, 0); Node.push_back(Node_P);
	Huffman_Node Node_Q(0, 'Q', 0, 0, 0); Node.push_back(Node_Q);
	Huffman_Node Node_R(0, 'R', 0, 0, 0); Node.push_back(Node_R);
	Huffman_Node Node_S(0, 'S', 0, 0, 0); Node.push_back(Node_S);
	Huffman_Node Node_T(0, 'T', 0, 0, 0); Node.push_back(Node_T);
	Huffman_Node Node_U(0, 'U', 0, 0, 0); Node.push_back(Node_U);
	Huffman_Node Node_V(0, 'V', 0, 0, 0); Node.push_back(Node_V);
	Huffman_Node Node_W(0, 'W', 0, 0, 0); Node.push_back(Node_W);
	Huffman_Node Node_X(0, 'X', 0, 0, 0); Node.push_back(Node_X);
	Huffman_Node Node_Y(0, 'Y', 0, 0, 0); Node.push_back(Node_Y);
	Huffman_Node Node_Z(0, 'Z', 0, 0, 0); Node.push_back(Node_Z);

	sort(Node.begin(), Node.end(), Compare());
}

void Huffman_Node::Creat_HT() {


}
