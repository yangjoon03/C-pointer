# 포인터의 특징 및 주의해야할 코드를 제공함.
#### C++클래스 기반 <br>
-------------------
<br>

## Argument_Passing_Mechanism(인수 전달 매커니즘)
  * call_by_value 함수 호출시 매개변수는 값을 넘기기 때문에 호출한 함수의 변수는 영향을 끼치지 않음.
  * call_by_reference 포인터를 사용시 호출한 함수의 변수 변경이 가능해짐.
<br>


## Argument_Passing_Mechanism_Utilization(인수 전달 메커니즘 활용)
  * call_by_value      : a  는 함수 호출한 곳의 값이 변경 X  
  * call_by_reference  : aa 는 함수 호출한 곳의 값이 변경 O
  *  -에러 예시 추가 예정
<br>

## Double pointer(더블 포인터를 사용하는 이유 ex)연결리스트)
  👌 인수전달 메커니즘에 이해를 필수로 한다.
  * 연결리스트에서의 더블 포인트
  * *는 값을 넘기기 때문에 call by value 문제 발생
  * 간단하게 설명하면 **은 *의 주소를 가지고 있으며 *은 값을 가지고 있다.(이해를 돕고자 하는 설명임)

✔탐색에서는 더블포인트가 필요하지 않은 이유.
  * 값을 변경할 필요가 없기때문에 call_by_value와 같은 문제가 발생하지 않는다.
