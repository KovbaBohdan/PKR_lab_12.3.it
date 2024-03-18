#include "pch.h"
#include "CppUnitTest.h"
#include "../PKR_lab_12.3.it/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            Node* head = nullptr;
            Node* tail = nullptr;

            Insert(&head, &tail, 1);
            Insert(&head, &tail, 2);
            Insert(&head, &tail, 3);

            Assert::IsNotNull(head);
            Assert::AreEqual(head->data, 1);
            Assert::IsNotNull(head->next);
            Assert::AreEqual(head->next->data, 2);
            Assert::IsNotNull(head->next->next);
            Assert::AreEqual(head->next->next->data, 3);

            
            Delete(&head, &tail);
		}
	};
}
