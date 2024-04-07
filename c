원격 저장소에서 branch만들기
https://codingapple.com/course-status/

gitflow 전략 (안정적인 배포가능, CI/CD 이른곳은 않좋아)
1. main (메인 프로젝트)
2. develop (프로젝트 사본 모든 기능을 넣어본다.)
3. feature(신기능 개발해보고 문제 없으면 develop에 merge)
4. release(임시 프로젝트, 출시전 여러가지 테스)
5. hotfix(갑작스런 버그, 코드문제 해결)

trunked-based(소드코드 한곳에만 있다, 많고 주기 테스트가 필요하다.)
main 하나에 feature를 여러개 merge한다.