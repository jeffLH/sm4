//对明密文的加解密采用多线程优化，具体操作如下：
26 77 f4 6b 09 c1 22 cc 97 55 33 10 5b d4 a2 2a
26 77 f4 6b 09 c1 22 cc 97 55 33 10 5b d4 a2 2a
26 77 f4 6b 09 c1 22 cc 97 55 33 10 5b d4 a2 2a
26 77 f4 6b 09 c1 22 cc 97 55 33 10 5b d4 a2 2a
26 77 f4 6b 09 c1 22 cc 97 55 33 10 5b d4 a2 2a
//所用时间为(毫秒 / ms)：0.0069
//对上面的密文进行解密：
01 23 45 67 89 ab cd ef fe dc ba 98 76 54 32 10
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
//所用时间为(毫秒 / ms)：0.0075

//外部多线程调用 
void test(int times, uint32_t Plain[4], uint32_t Secret[4],
	uint32_t de_Plain[4])
{
	for (int i = 0; i < times; i++)
	{
		en_SM4(Plain, Secret);
		de_SM4(Secret, de_Plain);
	}
}
RK(Key); //产生子密钥 
thread a(test, 125000, Plain, Secret, de_Plain);
thread b(test, 125000, Plain, Secret, de_Plain);
thread c(test, 125000, Plain, Secret, de_Plain);
thread d(test, 125000, Plain, Secret, de_Plain);
thread e(test, 125000, Plain, Secret, de_Plain);
thread f(test, 125000, Plain, Secret, de_Plain);
thread g(test, 125000, Plain, Secret, de_Plain);
thread h(test, 125000, Plain, Secret, de_Plain);
a.join(); b.join(); c.join(); d.join(); e.join();
f.join(); g.join(); h.join();