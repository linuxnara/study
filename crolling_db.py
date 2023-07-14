import io
import wget

url = "https://ucampus.knou.ac.kr/ekp/user/study/retrieveUSTStudy.do"
wget.download(url, out=".")

