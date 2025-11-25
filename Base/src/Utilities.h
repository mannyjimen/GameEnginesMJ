#pragma once

#define START_BASE_GAME(ClassName) \
int main()\
{\
	ClassName _gameObject;\
	_gameObject.Run();\
	return 0;\
}



#ifdef BASE_DEBUG==2
	#define BASE_ERROR(msg) std::cout<<msg<<std::endl;
	#define BASE_LOG(msg) std::cout<<msg<<std::endl;
#elif BASE_DEBUG==1
	#define BASE_ERROR(msg) std::cout<<msg<<std::endl;
	#define BASE_LOG(msg)
#else
	#define BASE_ERROR(msg)
	#define BASE_LOG(msg)
#endif

#ifdef BASE_MSVC
	#ifdef BASE_LIB
		#define BASE_API __declspec(dllexport)
	#else
		#define BASE_API __declspec(dllimport)
	#endif
#else
	#define BASE_API
#endif