<img width=100% src="https://capsule-render.vercel.app/api?type=waving&color=66CDAA&height=120&section=header"/>

  <h1>PROVA 1ªEE DE EDOO - 2024.2</h1>
  <div align="center">

<div align="center">
  <!-- Work Links -->
  <a href="https://github.com/LucasCabra7" target="_blank"><img src="https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white" target="_blank"></a>
  <a href="https://hefesto.uea.edu.br/gitlab/LucasCabra7" target="_blank"><img src="https://img.shields.io/badge/GitLab-330F63?style=for-the-badge&logo=gitlab&logoColor=white" target="_blank"></a>
  <a href="https://www.linkedin.com/in/lucas-cabral-987a75236" target="_blank"><img src="https://img.shields.io/badge/-LinkedIn-%230077B5?style=for-the-badge&logo=linkedin&logoColor=white" target="_blank"></a>
  <a href = "mailto:lucassilvacabral7@gmail.com"><img src="https://img.shields.io/badge/Gmail-D14836?style=for-the-badge&logo=gmail&logoColor=white"></a>
  <!-- Sociais Links -->
  <a href="https://instagram.com/lucas_cabrl7" target="_blank"><img src="https://img.shields.io/badge/-Instagram-%23E4405F?style=for-the-badge&logo=instagram&logoColor=white" target="_blank"></a>
  <!-- OTH Links -->
  <a href="https://steamcommunity.com/profiles/76561199132625159/" target="_blank"><img src="https://img.shields.io/badge/Steam-000000?style=for-the-badge&logo=steam&logoColor=white" target="_blank"></a>
</div>

<h2> ⚙️ FERRAMENTAS: </h2>
<img src="https://cdn.jsdelivr.net/gh/devicons/devicon@latest/icons/pycharm/pycharm-original.svg" width="40" height="40" /> 
            <img src="https://cdn.jsdelivr.net/gh/devicons/devicon@latest/icons/cplusplus/cplusplus-original.svg" width="40" height="40"/>
           <img src="https://cdn.jsdelivr.net/gh/devicons/devicon@latest/icons/vscode/vscode-original.svg" width="40" height="40" />


<h2> 📋 CONCEITOS: </h2>

O sistema foi desenvolvido utilizando os princípios da Programação Orientada a Objetos (POO) em C++, com uma arquitetura baseada em herança, encapsulamento e polimorfismo. 

A classe base abstrata `Sala`, definida no arquivo `Sala.h`, contém atributos comuns a todas as salas, como `tipo`, `capacidade`, `disponivel`. Essa classe é caracterizada pela presença de um método puramente virtual `reservar()`, que obriga todas as classes derivadas, como (`SalaAula`, `SalaReunia` e `Auditorio`) a implementar sua própria versão desse método. Esse uso de polimorfismo garante que cada tipo de sala tenha um comportamento específico para o processo de reserva, respeitando suas particularidades.

Todos os atributos da classe `Sala` (e também das classes Filhas) são declarados como **privados**, promovendo o encapsulamento. O acesso e a modificação desses atributos são feitos exclusivamente por meio de **métodos públicos (Getters e Setters)**, garantido maior segurança e controle sobre os dados internos das classes.

Cada classe Filha também define seu próprio construtor, que utiliza a inicialização para repassar os parâmetros ao construtor da classe base (**Sala**), garantindo que os atributos herdados sejam corretamente inicializados.

A estrutura do sistema está organizada em arquivos separados, utilizando boas práticas em C++:

-> Arquivos `.h` para declaração das classes e métodos;

-> Arquivos `.cpp` para a implementação dos comportamentos definidos nas classes.

[Prova EDOO 2024.2.docx](https://github.com/user-attachments/files/21107159/Prova.EDOO.2024.2.docx)



🤠 **Integrante:**
<table>
  <tr>
    <td align="center">
      <a href="https://github.com/LucasCabra7">
        <img src="https://avatars.githubusercontent.com/u/155683708?v=4" width="115">
      </a><br>
      <sub>Lucas Cabral (<code>lsc9</code>)</sub>
    </td>

