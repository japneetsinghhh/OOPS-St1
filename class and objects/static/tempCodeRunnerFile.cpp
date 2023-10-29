	char a[] = "abc";
	char b[] = "def";
	e1.set(a,123);
	e2.set(b,234);
	cout<< "name: "<<e1.get_name()<<" id: "<<e1.get_id()<<" count: "<<Employee::get_counter()<<endl;
	cout<< "name: "<<e2.get_name()<<" id: "<<e2.get_id()<<" count: "<<e2.get_counter()<<endl;