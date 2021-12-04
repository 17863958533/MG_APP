function Cs=GetCoordSys(type)

Cs.type='1984';%�������ƣ�����Ϊ����1954������1980������1984����
Cs.A=6378137.0;%���򳤰뾶��
Cs.Alfa=1.0/298.257223563;%������ʣ�
Cs.E2=0.00669437999014132;%�����һƫ���ʵ�ƽ����
Cs.UTM=1.0;%���������ߵľ���(�û��ȱ�ʾ)��
Cs.X0=0;Cs.Y0=0;%X0,Y0�ֱ�ΪX��Y����ӳ���(��kmΪ��λ)
Cs.L0=0;%Ϊ���������߾���(�û��ȱ�ʾ)��
Cs.H0=0;%ΪͶӰ��߳�(�˴�Ϊ��ظߣ���mΪ��λ)
Cs.DN=0;%�߳��쳣(��mΪ��λ);
Cs.GM=0;
Cs.Omega=0;
switch type
    case '1984'
        return
    case '1969'
        Cs.type='1969';
        Cs.A=6378160.0;
        Cs.Alfa=1.0/298.25;
        Cs.E2=2*Cs.Alfa*Cs.Alfa;
        Cs.GM=0;
        Cs.Omega=0;
        Cs.UTM=0.9996;
    case '1980'
        Cs.type='1980';
        Cs.A=6378140.0;
        Cs.UTM=1.0;
        Cs.Alfa=1.0/298.257;
        Cs.GM=0;
        Cs.Omega=0;
        Cs.E2=0.006694384999588;
    case '1954'
        Cs.type='1954';
        Cs.A=6378245.0;
        Cs.Alfa=1.0/298.3;
        Cs.E2=0.00669342162296594;
        Cs.GM=0;
        Cs.Omega=0;
        Cs.UTM=1.0;
    case '2000'
        Cs.type='2000';
        Cs.A=6378137.0;
        Cs.Alfa=1.0/298.257222101;
        Cs.E2=2*Cs.Alfa*Cs.Alfa;
        Cs.GM=3.986004418*1e+14;
        Cs.Omega=7.292115*1e-5;
        Cs.UTM=0;
    case 'PZ-90'
        Cs.type='PZ-90';
        Cs.A=6378136.0;
        Cs.Alfa=1.0/298.257839303;
        Cs.E2=2*Cs.Alfa*Cs.Alfa;
        Cs.GM=3.9860044*1e+14;
        Cs.Omega=7.292115*1e-5;
        Cs.UTM=0;
    otherwise
        disp('û�д�����ģ�͵Ĳ������Ѿ������в�������ΪWGS��84�Ĳ�����');
end;

